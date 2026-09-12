/*
 * This file is part of the mod-playerbots module for AzerothCore. See AUTHORS file for Copyright
 * information; released under GNU GPL v2 license, redistribute/modify under version 2 of the License,
 * or (at your option) any later version.
 */

#include "FurnMultipliers.h"
#include "FurnStrategy.h"

void TbcDungeonBloodFurnaceStrategy::InitTriggers(std::vector<TriggerNode*>& triggers)
{
    // Keli'dan the Breaker
    triggers.push_back(new TriggerNode("kelidan burning nova aura",
                                       {NextAction("kelidan burning nova aura flee", ACTION_EMERGENCY + 1)}));    
}

void TbcDungeonBloodFurnaceStrategy::InitMultipliers(std::vector<Multiplier*>& multipliers)
{
    multipliers.push_back(new KelidanBurningNovaAuraFleeMultiplier(botAI));
}
