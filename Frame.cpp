#include <iostream>

int main() {
    std::cout << "Enter the width of the frame\n";
    std::cout << "---> ";
    int width;
    std::cin >> width;
    std::cout << "Enter the height of the frame\n";
    std::cout << "---> ";
    int height;
    std::cin >> height;
    std::cout << "|";
    for (int a = 0; a < width - 2; a++){
       std::cout << "-";
   }
   std::cout << "|";
  for (int c = 0; c < height - 2; c++) {
      std::cout << "\n";
      std::cout << "|";
      for (int b = 0; b < width - 2; b++) {
          std::cout << " ";
      }
      std::cout << "|";
  }
    std::cout << "\n|";
    for (int d = 0; d < width - 2; d++){
        std::cout << "-";
    }
    std::cout << "|\n";
}