#ifndef CONTINUTMEDIA_H
#define CONTINUTMEDIA_H
#include <string>
#include <iostream>

class continutMedia{
protected:
     std::string titlu;
     int durata; //secunde
     static int nrObiecte;
public:
     continutMedia(std::string t="", int d  = 0 ) ;
     
     virtual void afisare() const;
     virtual void redare() = 0;
     static int getNrObiecte();
     virtual continutMedia* clone() const= 0;
     void setTitlu(std::string t) {this->titlu = t;}
     void setDurata(int d) { this->durata =d;}
     virtual ~continutMedia();
};
#endif