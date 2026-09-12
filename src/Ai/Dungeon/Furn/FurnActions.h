/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#ifndef PLAYERBOTS_FURNACTIONS_H
#define PLAYERBOTS_FURNACTIONS_H

#include "Action.h"

// Keli'dan the Breaker

class KelidanBurningNovaAuraFleeAction : public Action
{
    public:
        KelidanBurningNovaAuraFleeAction(PlayerbotAI* botAI, std::string const name = "kelidan burning nova aura flee")
            : Action(botAI, name)
        {
        }
        bool Execute(Event event) override;
};

#endif
