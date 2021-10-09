#include <iostream>

int main() {
       for (int i = 0; i <= 5; i++) {
           for (int j = 0; j <= 25; j++) {
               if (i == 0 || i == 5) std::cout << "-";
               else if (j == 0 || j == 25) std::cout << "|";
               else std::cout << " ";
           }
           std::cout << "\n";
       }
}
