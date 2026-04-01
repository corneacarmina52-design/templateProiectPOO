#include "continutMedia.h"
#ifndef VIDEO_H
#define VIDEO_H
#include <string>

class Video : virtual public continutMedia {
     protected:
          std::string subtitrari;
          std::string rezolutie;
     public:
          Video(std::string t = "", int d = 0, std::string sub = "", std::string rez = "");
          void afisare() const override;
          void redare() override { std::cout<<" Redare videoclip    \n";}
          continutMedia* clone() const override { return new Video(*this); }
};
#endif