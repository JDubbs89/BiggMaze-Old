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

class AttrMod:
    def __init__(self, name, magnitude, attr_tag):
        self.name = name
        self.mag = magnitude
        self.attr_tag = attr_tag

class Tag:
    def __init__(self, name):
        self.name = name
        self.val = True

class Ingredient: # an abstract container class for ingredient data. This could be a struct
    def __init__(self, name, desc, class_type, attributes_to_modify, tags, gameplay_effects, level, can_have_multiple = True):
        self.name, self.description, self.class_type = name, desc, class_type
        self.attributes_to_modify, self.tags, self.gameplay_effects = attributes_to_modify, tags, gameplay_effects
        self.level, self.can_have_multiple = level, can_have_multiple

class Ability: # a constructor class for ability data from ingredients
    def __init__(self, ingredients):
        self.ingredient_list = ingredients
        self.level = self.determine_level()
        self.base_ingredient = self.find_base_ingredient()
        self.support_ingredients, self.cd_ingredients = self.find_support_and_cd_ingredients()
        self.ingredient_list = self.support_ingredients + self.cd_ingredients
        self.isValid = True
        if self.base_ingredient.name == 'null' or len(self.support_ingredients) <= 0 or len(self.cd_ingredients) <= 0:
            print('Invalid ability!!!')
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
        for i in self.ingredient_list:
            if classType_as_int(i.class_type) == 0:
                return i
        return Ingredient('null', 'null', 'null', [], {},[],0)

    def find_support_and_cd_ingredients(self):
        supp = []
        cd = []
        for i in self.ingredient_list:
            if classType_as_int(i.class_type) == 1:
                if len(supp) < self.level:
                    supp.append(i)
            if classType_as_int(i.class_type) == 2:
                if len(cd) < self.level:
                    cd.append(i)
        return supp, cd

    def generate_name(self):
        if self.isValid:
            name = self.base_ingredient.name + ' ' + self.support_ingredients[0].name + ' ' + self.cd_ingredients[0].name
            return name
        return 'null'


ingredientTypes = {
        "banana":
        Ingredient(
        'Banana',
        'a banana',
        'base',
        [],
        {'Ability':[Tag('target')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': True, 'BaseTasks': [Tag('banana_boomerang')]},
        [],
        1
        ),
        "meatball":
        Ingredient(
        'Meatball',
        'a meatball',
        'base',
        [],
        {'Ability':[Tag('target')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': True, 'BaseTasks': [Tag('meatball_toss')]},
        [],
        1
        ),
        "noodle":
        Ingredient(
        'Noodle',
        'a noodle',
        'support',
        [AttrMod('movement_speed', 20.0, Tag('move_speed'))],
        {'Ability':[Tag('movement'), Tag('action')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': False, 'BaseTasks': [Tag('noodle_grapple')]},
        [],
        1
        ),
        "jalapeno":
        Ingredient(
        'Jalapeno',
        'a pepper',
        'support',
        [AttrMod('damage', 100.0, Tag('damage'))],
        {'Ability':[Tag('damage'), Tag('action')], 'TargetReq':[], 'TargetBlock': [Tag('invincible')], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': False, 'BaseTasks': [Tag('jalapeno_explosion')]},
        [],
        2
        ),
        "sauce":
        Ingredient(
        'Sauce',
        'a bit of sauce',
        'cd',
        [AttrMod('ability_cd', 10.0, Tag('ability_cd'))],
        {'Ability':[Tag('ability_cd')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': False, 'BaseTasks': []},
        [],
        3
        ),
        "parmesan":
        Ingredient(
        'Parmesan',
        'a bit of cheese',
        'cd',
        [AttrMod('ability_cd', 20.0, Tag('ability_cd'))],
        {'Ability':[Tag('ability_cd')], 'TargetReq':[], 'TargetBlock': [], 'SourceReq': [], 'SourceBlock': [], 'CanBeBase': False, 'BaseTasks': []},
        [],
        1
        ),
}

def create_ability():
    ing = choices(vals, k=4)
    abil = Ability(ing)
    if abil.isValid:
        print('\nAbility Generator\n' + '-' * 25)
        print(f'Ability Name: {abil.name}')
        print(f'Ability Level: {abil.level}')
        print('-' * 25)
        print('Ingredients:')
        for i in abil.ingredient_list:
            print('\t' + '-' * 25)
            print(f'\tName: {i.name}')
            print(f'\tDescription: {i.description}')
            print(f'\tClass: {i.class_type}')
            count = 1
            for j in i.tags['BaseTasks']:
                print(f'\tTask {count}: {j.name}')
                count += 1
            for j in i.attributes_to_modify:
                print(f'\t{j.attr_tag.name} Modifier: {j.name}, {j.mag}')
    else:
        create_ability()

def main():
    create_ability()

if __name__ == "__main__":
    vals = list(ingredientTypes.values())
    main()