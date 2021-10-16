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
std::cout << "---> ";
std::string move;
std::cin >> move;
if (move == "w" || move == "s" || move == "a" || move == "d") {
    if (move == "w") {
        if (y <= 14) {
            y++;
            std::cout << "y:" << y << " - x" << x << std::endl;
        }
    }
}
}
