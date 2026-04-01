#include "Playlist.h"
#include "videoclipMuzica.h"

Playlist::Playlist(std::string n) : nume(n) {}

Playlist::~Playlist(){
     for (auto el: elemente) {
          delete el;
     }
     elemente.clear();
}; //pt curatarea memorieri

Playlist::Playlist(const Playlist& altul){
     this ->nume = altul.nume + "_copy";
     for (auto el: altul.elemente ) {
          elemente.push_back(el->clone()); //copiem orice tip de lement
     }
}
Playlist& Playlist::operator=(const Playlist& altul ){
     if(this != &altul) { //verifica autoatribuirea
          for (auto el : elemente) delete el;
          elemente.clear(); // stergem ce aveam inainte

          this -> nume = altul.nume;
          for (auto el : altul.elemente) {
               elemente.push_back(el->clone()); //copiez datele noi
          }
     }
     return *this;
}

void Playlist::adaugaMedia(continutMedia* m) {
     elemente.push_back(m);
} 
void Playlist::afisarePlaylist() const {
     std::cout<< "Playlist: " << nume<< "\n";
     for (auto el: elemente) {
          el->afisare();
     }
}