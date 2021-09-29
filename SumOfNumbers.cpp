#include <iostream>

int main() {
    std::cout << "How many numbers do you want to add?\n";
    std::cout << "---> ";
       int HowNumbers;
       int number;
       int sum = 0;
    std::cin >> HowNumbers;
       for (int count = 0; count < HowNumbers; count++) {
           std::cout << "Add number ---> ";
           std::cin >> number;
           sum += number;
       }
       std::cout << "Addition result = " << sum << "\n";
}
