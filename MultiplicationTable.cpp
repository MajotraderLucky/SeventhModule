#include <iostream>

int main() {
std::cout << "Add number ---> ";
int number;
std::cin >> number;
   for (int count = 1; count <= number; count++) {
       int sum = count * number;
       std::cout << number << " x " << count << " = " << sum << "\n";
   }
}
