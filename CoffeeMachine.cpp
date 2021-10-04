#include <iostream>

int main() {
     for (; true ;) {
         std::cout << "How much water to pour?\n";
         std::cout << "---> ";
         int water;
         std::cin >> water;
         int milk;
         std::cout << "How much milk to pour?\n";
         std::cout << "---> ";
         std::cin >> milk;
         bool haveDrinks = (milk >= 270 && water >= 300);
         for (; haveDrinks == true;) {
             std::cout << "milk = " << milk << ", water = " << water << "\n";
             std::cout << "Latte or Americano?\n";
             std::cout << "---> ";
             std::string latte = "Latte";
             std::string latte2 = "latte";
             std::string americano = "Americano";
             std::string americano2 = "americano";
             std::string answer;
             std::cin >> answer;
             if (answer == americano || answer == americano2) {
                 if (water >= 300) {
                     water -= 300;
                     std::cout << "milk = " << milk << ", water = " << water << "\n";
                 } else {
                     std::cout << "There is not enough water for this drink!\n";
                     std::cout << "milk = " << milk << ", water = " << water << "\n";
                     break;
                 }
             } else if (answer == latte || answer == latte2) {
                 if (water >= 30 && milk >= 270) {
                     water -= 30;
                     milk -= 270;
                 } else {
                     if (water < 30) std::cout << "There is not enough water for this drink!\n";
                     if (milk < 270) std::cout << "There is not enough milk for this drink!\n";
                     std::cout << "milk = " << milk << ", water = " << water << "\n";
                     break;
                 }
             }
         }
         std::cout << "The coffee machine needs refueling!\n";
     }
}
