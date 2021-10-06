#include <iostream>

int main() {
    int longRoom  = 15;
    int widthRoom = 20;
    int y  = longRoom / 2; // find the center
    int x = widthRoom / 2;
    std::cout << "Mars rover landed in room! Coordinates = y:" << y << " - x" << x << "\n";
    std::cout << "Forward movement  - push 'w'\n";
    std::cout << "Backward movement - push 's'\n";
    std::cout << "Left     movement - push 'a'\n";
    std::cout << "Right    movement - push 'd'\n";
       for (; true;) {
           std::cout << "---> ";
           std::string move;
           std::cin >> move;
           if (move == "w" && y <= 14) {
               y++;
               std::cout << "y:" << y << " - x" << x << "\n";
           } else if (move == "w" && y >= 15) {
               std::cout << "This is a wall forward!\n";
               std::cout << "y:" << y << " - x" << x << "\n";
           }
           if (move == "s" && y >= 2) {
               y--;
               std::cout << "y:" << y << " - x" << x << "\n";
           } else if (move == "s" && y < 2){
               std::cout << "This is a wall behind!\n";
               std::cout << "y:" << y << " - x" << x << "\n";
           }
           if (move == "a" && x >= 2) {
               x--;
               std::cout << "y:" << y << " - x" << x << "\n";
           } else if (move == "a" && x < 2) {
               std::cout << "This is a wall left!\n";
               std::cout << "y:" << y << " - x" << x << "\n";
           }
           if (move == "d" && x <= 19) {
               x++;
               std::cout << "y:" << y << " - x" << x << "\n";
           } else if (move == "d" && x > 19) {
               std::cout << "This is a wall right!\n";
               std::cout << "y:" << y << " - x" << x << "\n";
           }
       }
}
