#include <iostream>

int main() {
    for (int a = 0; a <= 20; a++) {
        if (a == 0 || a == 20) std::cout << "|";
        else std::cout << "-";
    }
    std::cout << "\n";
    for (int b = 0; b <= 20; b++) {
        if (b == 0 || b == 20) std::cout << "|";
        else std::cout << ".";
    }
    std::cout << "\n";
    for (int c = 0; c <= 20; c++) {
        if (c == 0 || c == 20) std::cout << "|";
        else if (c == 7) std::cout << "S";
        else if (c == 8 || c == 11) std::cout << "E";
        else if (c == 9) std::cout << "R";
        else if (c == 10) std::cout << "G";
        else if (c == 12) std::cout << "Y";
        else std::cout << ".";
    }
    std::cout << "\n";
    for (int b = 0; b <= 20; b++) {
        if (b == 0 || b == 20) std::cout << "|";
        else std::cout << ".";
    }
    std::cout << "\n";
    for (int a = 0; a <= 20; a++) {
        if (a == 0) std::cout << "|";
        else if (a == 20) std::cout << "|";
        else std::cout << "-";
    }
    std::cout << "\n";
}
