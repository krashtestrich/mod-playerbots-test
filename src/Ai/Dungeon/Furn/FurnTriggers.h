/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#ifndef PLAYERBOTS_FURNTRIGGERS_H
#define PLAYERBOTS_FURNTRIGGERS_H

#include "Trigger.h"

enum class BloodFurnaceIDs : uint32
{
    // Keli'dan the Breaker
    SPELL_BURNING_NOVA = 30940
};

// Keli'dan the Breaker

class KelidanHasBurningNovaAuraTrigger : public Trigger
{
public:
    KelidanHasBurningNovaAuraTrigger(PlayerbotAI* botAI)
        : Trigger(botAI, "kelidan has burning nova aura")
    {
    }

    bool IsActive() override;
};

#endif
