#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    /*
    std::string favInstrument;
    std::string favComposer;
    int age;

    std::string get_favInstrument() {return favInstrument;}
    std::string favComposer() {return favComposer;}
    int get_age() {return age;}
    */

public:
    Musician();

    Musician(std::string instrument, int experience);

    std::string instrument;
    int experience;

    std::string get_instrument() {return instrument;}
    int get_experience() {return experience;}
};

#endif
