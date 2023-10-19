#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"

class Monster : public Character {
public:
    Monster(std::string n, int h, int ap);

    void attack(Character& target);
};

#endif
