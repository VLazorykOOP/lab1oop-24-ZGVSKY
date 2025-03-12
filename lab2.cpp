#include <iostream>

void ex_one() {

    
}

void ex_two() {

}

int main() {
    std::cout << "#################" << std::endl;
    std::cout << "1: EX_1" << std::endl;
    std::cout << "2: EX_2" << std::endl;
    std::cout << "#################" << std::endl;
    int N;
    std::cout << "Enter number: ";
    std::cin >> N;
    if (N == 1) {ex_one();}
    if (N == 2) {ex_two();}
    return 0;
}