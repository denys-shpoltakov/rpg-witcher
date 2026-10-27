#pragma once

#include "../include/CBaseEntity.h"
#include <iostream>
#include <vector>

class CBaseNPC : public CBaseEntity 
{
    private:
        std::vector<std::string> m_szDialogues = {};
    public:
    CBaseNPC(std::string name, float health, int damage, std::vector<std::string> dialogues);
};
