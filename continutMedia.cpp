#include "continutMedia.h"
#include <iostream>

int continutMedia::nrObiecte = 0; //initializez membrul static

continutMedia::continutMedia(std::string t, int d) : titlu(t), durata(d) {
     nrObiecte++;
}

continutMedia::~continutMedia() {
     nrObiecte--;
}
void continutMedia::afisare() const{
     std::cout<< " titlu "<<titlu<< " durata "<<durata<< " secunde " ;

}
int continutMedia::getNrObiecte() {
     return nrObiecte;
}
