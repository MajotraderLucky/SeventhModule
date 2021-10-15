#include <iostream>

int main() {
    int height;
    std::cout << "Enter the height of the tree\n";
    std::cout << "---> ";
    std::cin >> height;

    //Find the width of the tree
    int width = 2 * (height / 2);
    for (int a = 0; a < height; a++) {
        width++;
    }
    //Find the center of the tree
    int center = 0;
    //Find the number of branches
    int countBranches = 0;
    for (int a = 0; a <= height; a++) {
        if (width % 2 != 0) {
            center = (width / 2) +1;
        } else {
            center = (width / 2);
        }
        for (int b = 0; b <= width; b++) {
            if (b > (center - countBranches) && b < (center + countBranches)) {
                std::cout << "#";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
        countBranches++;
    }
}
