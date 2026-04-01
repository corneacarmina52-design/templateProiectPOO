#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include <string>
#include "continutMedia.h"

class Playlist {
     private:
          std::string nume;
          std::vector<continutMedia*> elemente;

     public:
          Playlist(std::string n = "Playlist Nou");
          ~Playlist(); //destructor
          Playlist(const Playlist& altul); //constructor de copiere
          Playlist& operator=(const Playlist& altul); //operator de atribuire

          void adaugaMedia(continutMedia* m);
          void afisarePlaylist() const;


};

#endif