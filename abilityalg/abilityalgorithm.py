from random import shuffle, choices
def classType_as_int(classType):
    if classType == 'base' or classType == 'Base':
        return 0
    elif classType == 'support' or classType == 'Support':
        return 1
    elif classType == 'cd' or classType == 'Cd':
        return 2
    else:
        return -1

def is_attrMod_in_arr(arr,tag):
    for i in arr:
        if i.attr_tag.name == tag.name:
            return True
    return False

def does_ingredient_have_desired_task(ingredient, taskString = 'b'): # Checks if the supplied ingredient has a task with the desired prefix string. Default 'b'
    for i in ingredient.tags['BaseTasks']:
        if i.name[0] == taskString:
            return True
    return False

class AttrMod:
    def __init__(self, name, magnitude, attr_tag, mag_type = 'add'):
        self.name = name
        self.mag = magnitude
        self.mag_type = mag_type
        self.attr_tag = attr_tag


class Tag:
    def __init__(self, name):
        self.name = name
        self.val = True


class Ingredient: # an abstract container class for ingredient data. This could be a struct
    def __init__(self, name, desc, class_type,possible_class_types, attributes_to_modify, tags, gameplay_effects, level, can_have_multiple = True):
        self.name = name
        self.description = desc
        self.class_type = class_type
        self.possible_class_types = possible_class_types
        self.attributes_to_modify = attributes_to_modify
        self.tags = tags
        self.gameplay_effects = gameplay_effects
        self.level, self.can_have_multiple = level, can_have_multiple


class Ability: # a constructor class for ability data from ingredients
    def __init__(self, ingredients):
        self.ingredient_list = ingredients
        self.level = self.determine_level()
        self.base_ingredient, self.base_ingredient_index = self.find_base_ingredient()
        self.support_ingredients, self.cd_ingredients = self.find_support_and_cd_ingredients()
        self.ingredient_list = self.support_ingredients + self.cd_ingredients
        self.isValid = True
        if self.base_ingredient.name == 'null' or len(self.support_ingredients) <= 0 or len(self.cd_ingredients) <= 0:
            print('Invalid ability!!!\nRegenerating...')
            print('-' * 25)
            self.isValid = False
        self.ingredient_list.append(self.base_ingredient)
        shuffle(self.ingredient_list)
        self.name = self.generate_name()

    def determine_level(self):
        total = 0
        for i in self.ingredient_list:
            total += i.level
        return total // len(self.ingredient_list)

    def find_base_ingredient(self):
        count = 0
        for i in self.ingredient_list:
            if (i.class_type == 'base' or 'base' in i.possible_class_types) and does_ingredient_have_desired_task(i,'b'):
                return i, count
            count += 1
        return Ingredient('null', 'null', 'null',[], [], {},[],0)

    def find_support_and_cd_ingredients(self):
        supp = []
        cd = []
        for i in self.ingredient_list:
            if i.class_type == 'support' or 'support' in i.possible_class_types:
                if len(supp) < self.level and does_ingredient_have_desired_task(i,'s'): # Make sure the ability can have more ingredients and that the support ingredient in question has a base task.
                    supp.append(i)
            if i.class_type == 'cd' or 'cd' in i.possible_class_types:
                if len(cd) < self.level and is_attrMod_in_arr(i.attributes_to_modify, Tag('ability_cd')): # Make sure the ability can have more ingredients and that the cooldown ingredient in question has a cooldown modifier.
                    cd.append(i)
        return supp, cd

    def generate_name(self):
        if self.isValid:
            name = self.base_ingredient.name + ' ' + self.support_ingredients[0].name + ' ' + self.cd_ingredients[0].name
            return name
        return 'null'

    def print_info(self):
        print(f'\nAbility Name: {self.name}')
        print(f'Ability Level: {self.level}\n')
        #print('-' * 25)
        #print('Ingredients:')
        ing_count = 0
        for i in self.ingredient_list:
            ing_count += 1
            print('-' * 25)
            print(f'Ingredient {ing_count}')
            print('-' * 25)
            print(f'Name: {i.name}')
            print(f'Description: {i.description}')
            print(f'Class: {i.class_type}')
            count = 1
            keys = i.tags.keys()
            print('Tags:')
            for j in keys:
                tag_count = 1
                print(f'  {count}.) {j}: ')
                for k in i.tags[j]:
                    print(f'    {chr(tag_count + 96)}.) {k.name}\n')
                    tag_count += 1
                count += 1
        print('\n')

ingredientTypes = {
        "banana":
        Ingredient(
        'Banana',
        'a banana',
        'base',
        ['base', 'support'],
        [],
        {'Ability':[Tag('target')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': [Tag('b_banana_boomerang')]},
        [],
        1
        ),
        "meatball":
        Ingredient(
        'Meatball',
        'a meatball',
        'base',
        ['base', 'support', 'cd'],
        [],
        {'Ability':[Tag('target')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': [Tag('b_meatball_toss')]},
        [],
        1
        ),
        "noodle":
        Ingredient(
        'Noodle',
        'a noodle',
        'support',
        ['base', 'support'],
        [AttrMod('movement_speed', 20.0, Tag('move_speed'))],
        {'Ability':[Tag('movement'), Tag('action')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': [Tag('s_noodle_grapple')]},
        [],
        1
        ),
        "jalapeno":
        Ingredient(
        'Jalapeno',
        'a pepper',
        'support',
        ['base', 'support'],
        [AttrMod('damage', 100.0, Tag('damage'))],
        {'Ability':[Tag('damage'), Tag('action')], 'TargetReq':[], 'TargetBlock': [Tag('invincible')], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': [Tag('s_jalapeno_explosion')]},
        [],
        2
        ),
        "sauce":
        Ingredient(
        'Sauce',
        'a bit of sauce',
        'cd',
        ['support', 'cd'],
        [AttrMod('ability_cd', 10.0, Tag('ability_cd'))],
        {'Ability':[Tag('ability_cd')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': []},
        [],
        3
        ),
        "parmesan":
        Ingredient(
        'Parmesan',
        'a bit of cheese',
        'cd',
        ['support', 'cd'],
        [AttrMod('ability_cd', 20.0, Tag('ability_cd'))],
        {'Ability':[Tag('ability_cd')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'BaseTasks': []},
        [],
        1
        ),
}

def create_ability():
    ing = choices(vals, k=4)
    abil = ''
    abil = Ability(ing)
    if abil.isValid:
        abil.print_info()
    else:
        create_ability()

def main():
    print('\n\nA B I L I T Y  G E N E R A T O R\n' + '-' * 25)
    create_ability()

if __name__ == "__main__":
    vals = list(ingredientTypes.values())
    main()