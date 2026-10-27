#include "../include/CBaseNPC.h"
#include <iostream>

CBaseNPC::CBaseNPC(std::string name, float health, int damage, std::vector<std::string> dialogues) : CBaseEntity(name, health, damage), m_szDialogues(dialogues)
{
    // empty
}