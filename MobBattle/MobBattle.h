#pragma once

#include <string>

struct Mob
{
    std::string name;
    int health;
    int attackSkill;
    int damage;
};

void battle(Mob& a, Mob& b);