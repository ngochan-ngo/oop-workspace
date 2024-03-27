#include <iostream>
#include "Musician.h"

/*
int main() {
Musician::Musician() {
    std::string instrument = "null";
    int experience = 0;
}

Musician::Musician(std::string instrument, int experience);

std::string Musician::get_instrument() {return instrument;}

int Musician::get_experience() {return experience;}
}
*/

Musician::Musician() {
  // Set default instrument and experience
  instrument = "null";
  experience = 0;
}

Musician::Musician(std::string instrument, int experience) {
  // Set instrument and experience from arguments
  instrument = instrument;
  experience = experience;
}

/*

std::string Musician::get_instrument() {
  return instrument;
}
int Musician::get_experience() {
  return experience;
}

*/
