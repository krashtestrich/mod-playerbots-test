/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#ifndef PLAYERBOTS_FURNTRIGGERCONTEXT_H
#define PLAYERBOTS_FURNTRIGGERCONTEXT_H

#include "AiObjectContext.h"
#include "FurnTriggers.h"

class TbcDungeonBloodFurnaceTriggerContext : public NamedObjectContext<Trigger>
{
public:
    TbcDungeonBloodFurnaceTriggerContext()
    {
        // Keli'dan the Breaker
        creators["kelidan has burning nova aura"] =
            &TbcDungeonBloodFurnaceTriggerContext::kelidan_has_burning_nova_aura;        
    }

private:
    // Keli'dan the Breaker
    static Trigger* kelidan_has_burning_nova_aura(PlayerbotAI* botAI)
    {
        return new KelidanHasBurningNovaAuraTrigger(botAI);
    }    
};

#endif
