#include <iostream>
#include <vector>

void ex_one() {
    int N;
    std::cout << "Write the number of array elements:" << std::endl;
    std::cin >> N;

    std::vector<int> arr(N);
    std::vector<int> result;
    std::cout << "Write the array elements: " << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (int i : arr) {
        if (i != 0) {
            result.push_back(i);
        }
    }

    std::cout << "Result: " << std::endl;
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;


}


void ex_two() {
    int N;
    int X;
    int pointer_lowest_element = 0;


    std::cout << "Write the number of array elements:" << std::endl;
    std::cin >> N;
    std::vector<int> arr(N);

    std::cout << "Write the array elements: " << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }


    std::cout << "Write X: ";
    std::cin >> X;
    //main cycle
    for (int element : arr) {
        if ( (element <  pointer_lowest_element) && (element<=X) ) {
            if (element < 0) {pointer_lowest_element = element;}
        }
    }
    if (pointer_lowest_element !=0){std::cout << pointer_lowest_element << " "<<std::endl;}
    else{std::cout << "elements lowest then X not found!"<<std::endl;}
}
int main() {
    std::cout << "#################" << std::endl;
    std::cout << "1: EX_1" << std::endl;
    std::cout << "2: EX_2" << std::endl;
    std::cout << "#################" << std::endl;
    int N;
    std::cin >> N;
    if (N == 1) {ex_one();}
    if (N == 2) {ex_two();}
    return 0;
}