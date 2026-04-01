#ifndef MEDIASPECIALIZAT_H
#define MEDIASPECIALIZAT_H

#include "Audio.h"
#include "Video.h"
#include "Playlist.h"
#include <string>

class Podcast : public Audio {
    std::string gazda;
public:
    Podcast(const std::string& t, int d, int db, const std::string& g);
    void redare() override;
    void afisare() const override;
    continutMedia* clone() const override;
};

class Film : public Video {
    std::string gen;
public:
    Film(const std::string& t, int d, const std::string& sub, const std::string& rez, const std::string& g);
    void redare() override;
    void afisare() const override;
    continutMedia* clone() const override;
};

class Reclama : public continutMedia {
    std::string brand;
public:
    Reclama(const std::string& t, int d, const std::string& b);
    void redare() override;
    void afisare() const override;
    continutMedia* clone() const override;
};

class Utilizator {
    std::string username;
    Playlist colectie;
public:
    Utilizator(const std::string& u);
    void afisareProfil() const;};
#endif
