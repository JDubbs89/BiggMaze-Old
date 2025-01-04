// Copyright Jade Eye Studios 2025


#include "ASC_BiggMaze.h"

void UASC_BiggMaze::RecieveDamage(UASC_BiggMaze* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
    ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}
