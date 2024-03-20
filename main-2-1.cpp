#include <iostream>

extern void hexDigits(int *, int);
extern int* readNumbers();

int main() {
    int array[4] = {11,2,3,4};
    hexDigits(array, 4);
}
