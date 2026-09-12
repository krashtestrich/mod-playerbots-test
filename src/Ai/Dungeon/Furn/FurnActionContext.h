/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#ifndef PLAYERBOTS_FURNACTIONCONTEXT_H
#define PLAYERBOTS_FURNACTIONCONTEXT_H

#include "Action.h"
#include "FurnActions.h"

class TbcDungeonBloodFurnaceActionContext : public NamedObjectContext<Action>
{
public:
    TbcDungeonBloodFurnaceActionContext() : NamedObjectContext<Action>(false, true)
    {
        // Keli'dan the Breaker
        creators["kelidan burninv nova aura flee"] =
            &TbcDungeonBloodFurnaceActionContext::kelidan_burning_nova_aura_flee;        
    }

private:
    // Keli'dan the Breaker
    static Action* kelidan_burning_nova_aura_flee(PlayerbotAI* botAI)
    {
        return new KelidanBurningNovaAuraFleeAction(botAI);
    }    
};

#endif
