/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#include "FurnTriggers.h"
#include "Playerbots.h"

// Keli'dan the Breaker

bool KelidanHasBurningNovaAuraTrigger::IsActive()
{
    Unit* kelidan = AI_VALUE2(Unit*, "find target", "kelidanthebreaker");
    if (!kelidan)
        return false;

    if (kelidan->HasAura(static_cast<uint32>(BloodFurnaceIDs::SPELL_BURNING_NOVA)))
    {
        return true;
    }

    return false;
}
