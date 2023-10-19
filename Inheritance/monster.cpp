#include "monster.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Monster::Monster(std::string n, int h, int ap) : Character(n, h, ap) {}

void Monster::attack(Character& target) {
    int damage = rand() % 11 + 10;
    std::cout << name << " memukul " << target.name << " dengan kekuatan " << damage << "!" << std::endl;
    target.takeDamage(damage);
}
