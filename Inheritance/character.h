#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
public:
    std::string name;
    int health;
    int attack_power;

    Character(std::string n, int h, int ap);

    void takeDamage(int damage);
};

#endif
