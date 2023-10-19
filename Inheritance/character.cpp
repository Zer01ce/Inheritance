#include "character.h"
#include <iostream>

Character::Character(std::string n, int h, int ap) : name(n), health(h), attack_power(ap) {}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health <= 0) {
        std::cout << name << " telah dikalahkan!" << std::endl;
    }
}
