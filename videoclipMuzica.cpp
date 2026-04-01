#include "videoclipMuzica.h"
#include <iostream>

videoclipMuzica::videoclipMuzica(const std::string& t, int d, int db, const std::string& sub, const std::string& rez)
    : continutMedia(t, d), Audio(t, d, db), Video(t, d, sub, rez) {}

void videoclipMuzica::redare() {
    std::cout << "Redare videoclip " << titlu << " cu rezolutia " << rezolutie << "\n";
}

void videoclipMuzica::afisare() const {
    Video::afisare();
    std::cout << " volum " << volum << " db\n";
}

videoclipMuzica* videoclipMuzica::clone() const {
    return new videoclipMuzica(*this);
}
