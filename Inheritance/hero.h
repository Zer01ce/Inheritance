#ifndef HERO_H
#define HERO_H

#include "character.h"

class Hero : public Character {
public:
    std::string special_ability;

    Hero(std::string n, int h, int ap, std::string sa);

    void useSpecialAbility(Character& target);

    void attack(Character& target);
};

#endif
