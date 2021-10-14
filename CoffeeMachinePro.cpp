#include <iostream>

int main() {
    for (; true;) {
        std::cout << "Coffee machine initialized...\n";
        int water = 0;
        int milk  = 0;
        std::cout << "Fill water\n";
        std::cout << "---> ";
        std::cin >> water;
        std::cout << "Fill milk\n";
        std::cout << "---> ";
        std::cin >> milk;
        for (int a = 0; a <= 30; a++) {
            std::cout << "*";
        }
        std::cout << "\n";
        std::cout << "Water - " << water << "\n";
        std::cout << "Milk  - " << milk << "\n";
        int americano = water / 300;
        std::cout << "Americano - " << americano << " cups\n";

        int latteWater = water / 30;
        int latteMilk  = milk / 270;
        int latte = 0;
        int sellAmericano = 0;
        int sellLatte     = 0;
        if (latteWater <= latteMilk) {
            latte = latteWater;
        } else {
            latte = latteMilk;
        }
        std::cout << "Latte ---- " << latte << " cups\n";
        for (int a = 0; a <= 30; a++) {
            std::cout << "*";
        }
        for (; true;) {
            if (water < 30 || milk < 270) {
                std::cout << "\n";
                std::cout << "The coffee machine needs to be refilled!\n";
                break;
            } else {
                std::cout << "\n";
                std::cout << "To get Americano push - '1'\n";
                std::cout << "To get Latte     push - '2'\n";
                int answer = 0;
                std::cout << "---> ";
                std::cin >> answer;
                if (answer == 1 && water >= 300) {
                    water -= 300;
                    sellAmericano++;
                } else if (answer == 2 && (water >= 30 && milk >= 270)) {
                    water -= 30;
                    milk  -= 270;
                    sellLatte++;
                } else if (water <= 30 || milk <= 270) {
                    std::cout << "\n";
                    std::cout << "The coffee machine needs to be refilled!\n";
                    break;
                }
                for (int a = 0; a <= 30; a++) {
                    std::cout << "*";
                }
                std::cout << "\n";
                std::cout << "Water - " << water << "\n";
                std::cout << "Milk  - " << milk << "\n";
                americano = water / 300;
                latteWater = water / 30;
                latteMilk  = milk / 270;
                std::cout << "Americano - " << americano << " cups\n";
                if (latteWater <= latteMilk) {
                    latte = latteWater;
                } else {
                    latte = latteMilk;
                }
                std::cout << "Latte ---- " << latte << " cups\n";
                for (int a = 0; a <= 30; a++) {
                    std::cout << "*";
                }
            }
        }
    }
}
