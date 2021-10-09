#include <iostream>

int main() {
    for (; true;) {
        std::cout << "How much water to pour?\n";
        std::cout << "---> ";
        int water;
        std::cin >> water;
        int milk;
        std::cout << "How much milk to pour?\n";
        std::cout << "---> ";
        std::cin >> milk;
        int americano = water / 300;
        int latte = 0;
        int sellLate = 0;
        int sellAmericano = 0;
        if (milk >= 270 && water >= 30) {
            if ((milk / 270) > (water / 30)) {
                latte = water / 30;
            } else if ((milk / 270) < (water / 30)) {
                latte = milk / 270;
            }
        }
        for (; (latte > 0 || americano > 0);) {
            std::cout << "Latte - " << latte << " cups\n";
            std::cout << "Americano - " << americano << " cups\n";
            std::cout << "for-----latte - push '1'\n";
            std::cout << "for americano - push '2'\n";
            std::cout << "---> ";
            int choice;
            std::cin >> choice;
            if (choice == 1 && milk >= 270 && water >= 30) {
                milk -= 270;
                water -= 30;
                latte--;
                sellLate++;
                std::cout << "milk = " << milk << "\n";
                std::cout << "water = " << water << "\n";
            } else {
                std::cout << "Not have latte!\n";
                std::cout << "milk = " << milk << "\n";
                std::cout << "water = " << water << "\n";
            }
            if (choice == 2 && water >= 300) {
                water -= 300;
                americano--;
                sellAmericano++;
                std::cout << "milk = " << milk << "\n";
                std::cout << "water = " << water << "\n";
            } else {
                std::cout << "Not have americano!\n";
                std::cout << "milk = " << milk << "\n";
                std::cout << "water = " << water << "\n";
            }
        }
        std::cout << "The CoffeeMachine must be filled with water and milk!\n";
        std::cout << "Latte was sold - " << sellLate << " cups\n";
        std::cout << "Americano was sold - " << sellAmericano << " cups\n";
    }
}
