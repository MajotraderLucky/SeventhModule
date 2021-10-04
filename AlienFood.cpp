#include <iostream>

int main() {
    for (int food = 100; food > 0; food -= 4) {
        std::cout << "Next month food will be " << food << " kg\n";
    }
}
