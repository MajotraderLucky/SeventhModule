#include <iostream>

int main() {
    int longRoom = 15;
    int widthRoom = 20;
    int y = longRoom / 2; // find the center
    int x = widthRoom / 2;
    std::cout << "Mars rover landed in room! Coordinates = y:" << y << " - x" << x << "\n";
    std::cout << "Forward movement  - push 'w'\n";
    std::cout << "Backward movement - push 's'\n";
    std::cout << "Left     movement - push 'a'\n";
    std::cout << "Right    movement - push 'd'\n";
//------------------------------------------------------------------------------------------
for (; true;) {
    std::cout << "---> ";
    std::string move;
    std::cin >> move;
    if (move == "w" || move == "s" || move == "a" || move == "d") {
        if (move == "w") {
            if (y <= 14) {
                y++;
                std::cout << "y:" << y << " - x" << x << std::endl;
            } else {
                std::cout << "This is a wall forward!" << std::endl;
                std::cout << "y:" << y << " - x" << x << std::endl;
            }
        } else if (move == "s") {
            if (y >= 2) {
                y--;
                std::cout << "y:" << y << " - x" << x << std::endl;
            } else {
                std::cout << "This is a wall behind!" << std::endl;
                std::cout << "y:" << y << " - x" << x << std::endl;
            }
        } else if (move == "a") {
            if (x >= 2) {
                x--;
                std::cout << "y:" << y << " - x" << x << std::endl;
            } else {
                std::cout << "This is a wall left!\n";
                std::cout << "y:" << y << " - x" << x << "\n";
            }
        } else if (move == "d") {
            if (x <= 19) {
                x++;
                std::cout << "y:" << y << " - x" << x << "\n";
            } else {
                std::cout << "This is a wall right!\n";
                std::cout << "y:" << y << " - x" << x << "\n";
            }
        }
    } else {
        std::cout << "Incorrect value!\n";
    }
}
}
