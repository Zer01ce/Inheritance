#include "hero.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Hero::Hero(std::string n, int h, int ap, std::string sa) : Character(n, h, ap), special_ability(sa) {}

void Hero::useSpecialAbility(Character& target) {
    if (special_ability == "Heal") {
        int healAmount = rand() % 11 + 10;
        health += healAmount;
        std::cout << name << " menggunakan kemampuan Heal dan menambahkan " << healAmount << " kesehatan!" << std::endl;
    }
}

void Hero::attack(Character& target) {
    int damage = rand() % 11 + 10;
    std::cout << name << " menyerang " << target.name << " dengan kekuatan " << damage << "!" << std::endl;
    target.takeDamage(damage);
}
