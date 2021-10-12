#include <iostream>

int main() {
    for (int a = 0; a <= 20; a++) {
        if (a == 10) std::cout << "^";
        else std::cout << " ";
    }
    std::cout << "\n";
    for (int c = 0; c < 5; c++) {
        for (int b = 0; b <= 20; b++) {
            if (b == 10) std::cout << "|";
            else std::cout << " ";
        }
        std::cout << "\n";
    }
    for (int d = 0; d <= 20; d++) {
        if (d == 10) std::cout << "+";
        else if (d == 20) std::cout << ">";
        else std::cout << "-";
    }
    std::cout << "\n";
    for (int f = 0; f < 5; f++) {
        for (int e = 0; e <= 20; e++) {
            if (e == 10) std::cout << "|";
            else std::cout << " ";
        }
        std::cout << "\n";
    }
}
