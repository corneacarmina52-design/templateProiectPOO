1.INTRODUCERE
Acest proiect implementeaza o platforma de streaming media(similara cu YOUTUBE/SPOTIFY) care permite gestionarea diverselor tipuri de continut : audio, video , podcast-uri si filme. Sistemul ofera o interfata interactiva pentru adaugarea , vizualizarea, modificarea si stergerea elementelor din baza de date.

2.STRUCTURA IERARHICA SI CONCEPTE POO
Proiectul utilizeaza o ierarhie complexa de peste 10 clase, avand urmatoarele principii POO:

Mostenirea in Diamant:
Am implementat o structura de tip diamant pentru clasa VideoclipMuzica, care mosteneste atat AUDIO, cat si VIDEO. Pentru a evita duplicarea din clasa de baza continutMedia, am utilizat mostenirea virtuala(virtual public).

Ierarhia claselor:
1.continutMedia(Clasa Abstracta): Contine atributele de baza (titlu, durata) si metoda virtuale pure(redare, clone).
     -Audio(mostenire Virtuala): Adauga atributul pentru volum(decibeli).
          -Podcast: Extinde clasa Audio cu informatii despre gazda.
     -Video(Mostenire Virtuala): Adauga subtitrari si rezolutie.
          -Film: Extinde clasa Video cu informatii despre gen cinematografic.
     -videoclipMuzica: Combina functionalitatile Audio si Video prin mostenire multipla.
     -Reclama: Tip de continut media simplu prin promovarea brandurilor;

3.FUNCTIONALITATI SI GESTIUNI RESURSE
-Regula celor 3: Implementata in clasa Playlist (constructor de copiere, Operstor de atribuire, destructor) pentru a gestiona corect alocarea dinamica a pointerilor catre obiecte media.
-Membri Statici: Uitilizarea nrObiecte in continutMedia pentru a monitoriza in timp real numarul de elemente active din memorie;
-Tratarea exceptiilor: Utilizarea clasei custom eroareValidare(derivata din std::exception) pentru a preveni introducerea de date invalide, cum ar fi durata negativa sau indexuri de vector inexistente;
-Meniu Interactiv: Permite utilizatorului sa interactioneze cu baza de date prin comenzi simple;

4.TEHNOLOGII UTILIZATE
-Limbaj C++
-Versiune: Git/GitHub


