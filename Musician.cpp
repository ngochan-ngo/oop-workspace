#include <iostream>
#include "Musician.h"

int main() {
Musician::Musician() {
    std::string instrument = "null";
    int experience = 0;
}

Musician::Musician(std::string instrument, int experience);

std::string Musician::get_instrument() {return instrument;}

int Musician::get_experience() {return experience;}
}