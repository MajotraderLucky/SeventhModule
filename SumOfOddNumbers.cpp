#include <iostream>

int main() {
    std::cout << "Add number ---> ";
    int number;
    int sum = 0;
    std::cin >> number;
       for (int count = 1; count <= number; count++) {
           if (count % 2 != 0) {
               sum += count;
               if (count == number) {
                   std::cout << sum << "\n";
               }
           }
       }
}
