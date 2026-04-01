#include <iostream>
#include "Video.h"

Video::Video(std::string t, int d, std::string sub, std::string rez) : continutMedia(t, d) , subtitrari(sub), rezolutie(rez) {}

void Video::afisare() const {
     continutMedia::afisare();
     std::cout<<" | subtitrari " <<subtitrari<<std::endl;
     std::cout<<" | rezolutie "<<rezolutie<<std::endl;
}