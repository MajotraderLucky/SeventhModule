#include <iostream>

int main() {
    int count;
    for (count = 10; count != 0 ; count--) {
        std::cout << "Cut the wire?\n";
        std::string yes = "yes";
        std::string answer;
        std::cin >> answer;
        if (answer == yes) {
            std::cout << "Bomb defused! " << count << " attempts left before the explosion!\n";
            break;
        }
    }
    if (count == 0) {
        std::cout << "Booooooooooooom!\n";
    }
}
