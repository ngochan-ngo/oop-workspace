#include <iostream>
#include "Musician.h"

int main() {
Musician::Musician();

Musician::Musician(std::string instrument, int experience);

Musician m1;
m1.instrument = "guitar";
m1.experience = 11;

std::string Musician::get_instrument();

int Musician::get_experience();
}