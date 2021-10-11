#include <iostream>

int main() {
    int width;
    std::cout << "Enter the width of the head's title\n";
    std::cout << "---> ";
    std::cin >> width;
    int countExclamationMark;
    std::cout << "Enter the number of the exclamation marks\n";
    std::cout << "---> ";
    std::cin >> countExclamationMark;
    int centre = width / 2;
    int countStart = centre - (countExclamationMark / 2);
    int countFinish = countStart + countExclamationMark;
    for (int a = 0; a < width; a++) {
        if (a >= countStart && a < countFinish) std::cout << "!";
        else std::cout << "~";
    }
}
