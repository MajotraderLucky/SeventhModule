#include <iostream>

int main() {
    std::cout << "What time is it now?\n";
       int hour;
    std::cin >> hour;
     if ((hour > 0) && (hour <= 24)) {
         for (int count = 1; count <= hour; count++) {
             std::cout << "Cuc-koo! " << count << "\n";
         }
     }
     if (hour < 0 || hour > 24) {
         std::cout << "You entered an invalid value\n";
     }
}
