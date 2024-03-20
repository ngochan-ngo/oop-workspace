#include <iostream>

extern void printNumbers(int *, int);

int main() {
    int array[] = {1,2,4,8};
    printNumbers(array, 4);
}
