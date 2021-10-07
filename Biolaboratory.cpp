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
    int drops;
    int countHours = 0;
    for (drops = 10; drops >= 0; drops--) {
        countHours++;
        if (antibiotic > 0 && bacteria > 0) {
            bacteria *= 2;
            bacteria -= (antibiotic * drops);
            std::cout << "bacteria = " << bacteria << "; antibiotic = " << antibiotic * drops << "; hour = " << countHours << "\n";
            if(drops == 0 && bacteria > 0) {
                std::cout << "The bacteria is alive.\n";
            } else if (drops > 0 && bacteria == 0){
                std::cout << "The bacteria died.\n";
            }
        }
    }
}