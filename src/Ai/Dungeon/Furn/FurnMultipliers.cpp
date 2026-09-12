/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#include "FurnActions.h"
#include "FurnMultipliers.h"
#include "FurnTriggers.h"
#include "MovementActions.h"
#include "Playerbots.h"
#include "ReachTargetActions.h"

// Keli'dan the Breaker

float KelidanBurningNovaAuraFleeMultiplier::GetValue(Action* action)
{
    Unit* kelidan = AI_VALUE2(Unit*, "find target", "kelidanthebreaker");
    if (!kelidan)
        return 1.0f;

    if (!kelidan->HasAura(static_cast<uint32>(BloodFurnaceIDs::SPELL_BURNING_NOVA)))
        return 1.0f;

    if (dynamic_cast<CastReachTargetSpellAction*>(action) ||
        (dynamic_cast<MovementAction*>(action) && !dynamic_cast<KelidanBurningNovaAuraFleeAction*>(action)))
        return 0.0f;

    return 1.0f;
}
