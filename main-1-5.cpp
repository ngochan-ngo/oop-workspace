#include <iostream>

extern int count_evens(int);

int main() {
    int result = count_evens(14);
    std::cout << result;
}