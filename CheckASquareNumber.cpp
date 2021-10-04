#include <iostream>

int main() {
    int number;
    std::cout << "Add number\n";
    std::cout << "---> ";
    std::cin >> number;
     if (number >1) {
         for (int divider = 1; divider <= number; divider++) {
             if ((number % divider == 0) && ((divider * divider) == number)) {
                 std::cout << "Number " << number << " is the square " << divider << "\n";
                 break;
             }
             if (divider == number) {
                 std::cout << number << " is not a square of any numbers\n";
             }
         }
     } else {
         std::cout << "You entered an invalid value!\n";
     }
}
