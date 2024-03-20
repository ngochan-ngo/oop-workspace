#include <iostream>

void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << "\n";
    }
}

int main() {
    int array[] = {1,2,4,8};
    printNumbers(array, 4);
}