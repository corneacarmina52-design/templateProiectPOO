#ifndef VIDEOCLIPMUZICA_H
#define VIDEOCLIPMUZICA_H

#include "Audio.h"
#include "Video.h"

class videoclipMuzica : public Audio, public Video {
public:
    videoclipMuzica(const std::string& t, int d, int db, const std::string& sub, const std::string& rez);
    void redare() override;
    void afisare() const override;
    videoclipMuzica* clone() const override;
};
#endif