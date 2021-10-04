#include <iostream>

int main() {
    std::string goodAnswer = "Yes, of course, i did";
    int count = 0;
       for (std::string answer; answer != goodAnswer; std::getline(std::cin, answer)) {
           std::cout << "Have you completed the task?\n";
           std::cout << "---> ";
           count++;
       }
       std::cout << "Why do i have to remind you of this " << count << " times?\n";
}
