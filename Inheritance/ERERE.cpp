#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "character.h"
#include "hero.h"
#include "monster.h"

int main() {
    srand(static_cast<unsigned>(time(0)));

    std::string playerName;
    char playAgain;

    do {
        std::cout << "Selamat datang di permainan ERERE! Masukkan nama untuk character: ";
        std::cin >> playerName;

        Hero hero(playerName, 100, 15, "Heal");
        Monster monster("Monster", 100, 30);

        char choice;

        while (hero.health > 0 && monster.health > 0) {
            std::cout << "\n" << hero.name << " (" << hero.health << " HP) vs Monster (" << monster.health << " HP)" << std::endl;
            std::cout << "Aksi yang tersedia:" << std::endl;
            std::cout << "1. Serang Monster" << std::endl;
            std::cout << "2. Gunakan Kemampuan Khusus" << std::endl;
            std::cout << "3. Keluar" << std::endl;
            std::cout << "Pilih aksi (1/2/3): ";
            std::cin >> choice;

            switch (choice) {
            case '1':
                hero.attack(monster);
                break;
            case '2':
                hero.useSpecialAbility(hero);
                break;
            case '3':
                std::cout << "Anda keluar dari permainan." << std::endl;
                return 0;
            default:
                std::cout << "Pilihan tidak valid. Silakan pilih lagi." << std::endl;
                break;
            }

            if (monster.health <= 0) {
                std::cout << "Victory!" << std::endl;
                break;
            }

            monster.attack(hero);

            if (hero.health <= 0) {
                std::cout << "Defeat!" << std::endl;
                break;
            }
        }

        std::cout << "Apakah Anda ingin bermain lagi? (Ya/Tidak): ";
        std::cin >> playAgain;

    } while (playAgain == 'Ya' || playAgain == 'ya');

    return 0;
}