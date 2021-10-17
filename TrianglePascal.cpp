#include <iostream>

int main() {
    int countLines = 0;
    std::cout << "Enter the number of lines of Pascal you want to see" << std::endl;
    std::cout << "---> ";
    std::cin >> countLines;

       for (int line = 1; line <= countLines; ++ line) {
           int numbers = 1;

         for (int cell = 1; cell < (countLines - line + 3); ++cell) {
             std::cout << " ";
         }
         for (int a = 1; a <= line; ++a) {
             std::cout << numbers << " ";
             numbers = numbers * (line - a) / a;
         }
         std::cout << std::endl;
       }
   }

