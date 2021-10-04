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
    bool americanoHave = (water >= 300);
    bool latte = (water >= 30 && milk >= 270);
       if (americanoHave == true) {
           std::cout << "Coffee Machine have " << (water / 300) << " americano\n";
       }
       if ((latte == true) && ((milk / 270) <= (water / 30))) {
           std::cout << "Coffee Machine have " << (milk / 270) << " latte\n";
       } else if  ((latte == true) && ((milk / 270) >= (water / 30))) {
           std::cout << "Coffee Machine have " << (water / 30) << " latte\n";
       }

}
