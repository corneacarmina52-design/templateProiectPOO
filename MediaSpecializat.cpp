#include "MediaSpecializat.h"
#include <iostream>

Podcast::Podcast(const std::string& t, int d, int db, const std::string& g)
    : continutMedia(t, d), Audio(t, d, db), gazda(g) {}

void Podcast::redare() {
    std::cout << "Ascultam podcastul lui " << gazda << "\n";
}

void Podcast::afisare() const {
    Audio::afisare();
    std::cout << " | gazda: " << gazda << "\n";
}

continutMedia* Podcast::clone() const {
    return new Podcast(*this);
}

Film::Film(const std::string& t, int d, const std::string& sub, const std::string& rez, const std::string& g)
    : continutMedia(t, d), Video(t, d, sub, rez), gen(g) {}

void Film::redare() {
    std::cout << "Vizionam Filmul " << gen << " : " << titlu << "\n";
}

void Film::afisare() const {
    Video::afisare();
    std::cout << " | Gen: " << gen << "\n";
}

continutMedia* Film::clone() const {
    return new Film(*this);
}

Reclama::Reclama(const std::string& t, int d, const std::string& b)
    : continutMedia(t, d), brand(b) {}

void Reclama::redare() {
    std::cout << "Reclama de la : " << brand << "\n";
}

void Reclama::afisare() const {
    continutMedia::afisare();
    std::cout << " | Brand: " << brand << "\n";
}

continutMedia* Reclama::clone() const {
    return new Reclama(*this);
}

Utilizator::Utilizator(const std::string& u)
    : username(u), colectie(u + "'s Library") {}

void Utilizator::afisareProfil() const {
    std::cout << "Utilizator: " << username << "\n";
    colectie.afisarePlaylist();
}
