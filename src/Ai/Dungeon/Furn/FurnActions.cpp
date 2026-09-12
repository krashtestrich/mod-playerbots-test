/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#include "EncounterHelpers.h"
#include "FurnActions.h"
#include "Playerbots.h"

using namespace EncounterHelpers;

constexpr uint32 FURN_MAP_ID = 542;

// Keli'dan the Breaker

// Flee 30 yards when he gains Burning Nova Aura (in Preparation for Fire Nova)
bool KelidanBurningNovaAuraFleeAction::Execute(Event /*event*/)
{
    Unit* kelidan = AI_VALUE2(Unit*, "find target", "kelidanthebreaker");
    if (!kelidan)
        return false;

    constexpr float safeDistance = 35.0f;

    bot->CastStop();

    if (bot->GetDistance2d(kelidan) >= safeDistance)
        return false;

    return MoveAway(kelidan, safeDistance);
}
