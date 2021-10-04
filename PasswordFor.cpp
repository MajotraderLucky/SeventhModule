#include <iostream>

int main() {
    std::cout << "Enter password \n";
    std::cout << "---> ";
    int password;
    std::cin >> password;
    int sum = 0;
       for (; password != 0;) {
           sum += password % 10;
           password /= 10;
       }
       if (sum == 42) {
           std::cout << "Password accepted.\n";
       } else {
           std::cout << "Password is wrong! " << sum << "\n";
       }
}
