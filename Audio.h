#include "continutMedia.h"
#ifndef AUDIO_H
#define AUDIO_H
#include <string>

class Audio : virtual public continutMedia {
     protected: 
          int volum; //db
     public:
          Audio(std::string t = "", int d = 0, int db=0 ) ;
          void afisare() const override;
          void redare() override {
               std::cout<<" Se reda cotinutul audio: "<<titlu<<std::endl;
          }
          continutMedia* clone() const override {
               return new Audio(*this);
          }
};
#endif

