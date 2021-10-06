#include <iostream>

int main() {
    int bacteria;
    std::cout << "Enter the number of bacteria\n";
    std::cout << "---> ";
    std::cin >> bacteria;
    int antibiotic;
    std::cout << "Enter the number of antibiotic drops\n";
    std::cout << "---> ";
    std::cin >> antibiotic;
    int drops = 10;
       for (int count = 0; bacteria != 0; count++) {
           bacteria *= 2;
           bacteria -= (antibiotic * drops);
           std::cout << "bacteria = " << bacteria << "; drops = " << drops << "\n";
           drops--;
           if (drops == 0) {
               std::cout << "Antibiotic was not enough!\n";
               break;
           }
       }
       std::cout << "Bacteria is dead!\n";
}
