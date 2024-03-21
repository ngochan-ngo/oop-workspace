#include <iostream>
#include <Person.h>

struct Person {
    std::string name;
    int age;
};

Person* createPersonArray(int n) {

Person* PersonArray = new Person[n];

    for (int i =  0; i < n; i++) {
        for (int j =  0; j < 2; j++) {
            PersonArray[i].name = "John Doe";
            PersonArray[i].age = 0;
        } 
    }
    return PersonArray;
}

int main() {
    Person* arr = createPersonArray(10);
    delete[] arr;
}