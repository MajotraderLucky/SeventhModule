#include <iostream>

int main() {
    std::cout << "How much water to pour?\n";
    std::cout << "---> ";
    int water;
    std::cin >> water;
    int milk;
    std::cout << "How much milk to pour?\n";
    std::cout << "---> ";
    std::cin >> milk;
    int countLatteMilk  = milk / 270;
    int countLatteWater = water / 30;
    int countAmericano = water / 300;
    int countLatte = 0;
    int countSellLatte = 0;
    int countSellAmericano = 0;
       if (countLatteMilk < countLatteWater) {
           countLatte = countLatteMilk;
       } else if (countLatteMilk > countLatteWater) {
           countLatte = countLatteWater;
       }
       int sumCountCoffee = countLatte + countAmericano;
       for (int count = 0; count != sumCountCoffee; count++) {
           if (countAmericano >= 0 && countLatte >= 0) {
               std::cout << "latte - " << countLatte << "\n";
               std::cout << "americano - " << countAmericano << "\n";
               std::cout << "for-----latte - push '1'\n";
               std::cout << "for americano - push '2'\n";
               std::cout << "---> ";
               int choice;
               std::cin >> choice;
               if (choice == 1) {
                   if (milk >= 270 && water >= 30) {
                       milk -= 270;
                       water -= 30;
                       countSellLatte++;
                       if (countLatte != 0) {
                           countLatte--;
                       }
                   } else {
                       std::cout << "Not have latte!\n";
                       sumCountCoffee++;
                   }
               } else if (choice == 2) {
                   if (water >= 300) {
                       water -= 300;
                       countSellAmericano++;
                       if (countAmericano != 0) {
                           countAmericano--;
                       }
                   } else {
                       std::cout << "Not have americano!\n";
                       sumCountCoffee++;
                   }
               }
           }
       }
       std::cout << "CoffeeMachine needs to be refilled!\n";
       std::cout << "water = " << water << "\n";
       std::cout << "milk  = " << milk << "\n";
       std::cout << "Cups of americano were sold - " << countSellAmericano << "\n";
       std::cout << "Cups of latte were sold ----- " << countSellLatte << "\n";
}
