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
       bool haveDrinks = (countLatte > 0) && (countAmericano > 0);
       for (int count = 0; haveDrinks == true; count++) {
           if (countAmericano >= 0 && countLatte >= 0) {
               std::cout << "latte - " << countLatte << "\n";
               std::cout << "americano - " << countAmericano << "\n";
               std::cout << "for-----latte - push '1'\n";
               std::cout << "for americano - push '2'\n";
               std::cout << "---> ";
               int choice;
               std::cin >> choice;
               if (choice == 1) {
                   milk -= 270;
                   water -= 30;
                   countSellLatte++;
                   if (countLatte != 0) {
                       countLatte--;
                   }
               } else if (choice == 2) {
                   water -= 300;
                   countSellAmericano++;
                   if (countAmericano != 0) {
                       countAmericano--;
                   }
               }
           }
       }
       std::cout << "water = " << water << "\n";
       std::cout << "milk  = " << milk << "\n";
}
