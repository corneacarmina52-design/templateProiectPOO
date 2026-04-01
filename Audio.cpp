#include <iostream>
#include "Audio.h"

Audio::Audio(std::string t, int d, int db ) : continutMedia(t,d) , volum(db) {}

void Audio::afisare() const {
     continutMedia::afisare();
     std::cout<<" | volum "<<volum<<" db "<<std::endl;
}