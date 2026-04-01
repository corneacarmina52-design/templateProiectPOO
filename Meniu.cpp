#include "Meniu.h"
#include <iostream>
#include "Exceptii.h"
#include "videoclipMuzica.h"
#include "MediaSpecializat.h"
#include <string>

void Meniu::ruleaza() {
     int optiune = -1;
     while ( optiune != 0) {
          std::cout<<"\n---Sistem Streaming (Obiecte active: "<<continutMedia::getNrObiecte()<<") ---\n";
          std::cout<<"1. Adauga Videoclip Muzical \n";
          std::cout<<"2. Adauga Film\n";
          std::cout<<"3. Afiseaza tot continutul \n";
          std::cout<<"4. Modifica titlu\n";
          std::cout<<"5. Sterge ultimul element \n";
          std::cout<<"0. Iesire\n";
          std::cout<<"Alege: ";
          
          if (!(std::cin >> optiune)) { // Protecție dacă utilizatorul introduce litere
               std::cout<<"Adauga un nr valid: \n";
               std::cin.clear();
               std::cin.ignore(1000, '\n');
               continue;
        }
          
          try{
               if(optiune == 1) {
                    std::string  t, rez,sub;
                    int d,db;
                    std::cout<< "Titlu: ";
                    std::cin>>t;
                    std::cout<< "Durata: ";
                    std::cin>>d;
                    if(d<0)
                         throw EroareValidare("Durata trebuie sa fie pozitiva!");
                    std::cout<<"Decibeli: ";
                    std::cin>>db;
                    std::cout<<"Rezolutie: ";
                    std::cin>>rez;
                    std::cout<<"Subtitrare: ";
                    std::cin>>sub;
                    bazaDate.push_back(new videoclipMuzica(t,d,db,sub,rez));
               }
               else if (optiune == 2) {
                    std::string t,r,g;
                    int d;
                    std::cout<< "Titlu: ";
                    std::cin>> t;
                    std::cout<<" Durata: ";
                    std::cin>>d;
                    std::cout<<" Rezolutie: ";
                    std::cin>>r;
                    std::cout<<" Gen: ";
                    std::cin>>g;
                    bazaDate.push_back(new Film(t,d, "RO", r, g));
               }
               else if(optiune == 5) {
                    if(bazaDate.empty()) throw EroareValidare("Nu este nimic de sters!");
                    delete bazaDate.back();
                    bazaDate.pop_back();
                    std::cout<<" Element sters cu succes! \n";
               }
               else if (optiune == 4){
                    if(bazaDate.empty()) throw EroareValidare("Nu exista nimic de modificat! ");
                    int index;
                    std::cout<<" Index (0-)"<<bazaDate.size()-1<<"): ";
                    std::cin>>index;
                    if(index <0 || index >= bazaDate.size()) throw EroareValidare("Index Invalid:(");
                    std::string tNou;
                    std::cout<< "Titlu nou : ";
                    std::cin.ignore();//pentru a curata bufferul de la citirea anterioara;
                    std::getline(std::cin, tNou);
                    bazaDate[index]->setTitlu(tNou);
                    std::cout<<" Titlu actualizat!\n";
               }
               else if (optiune == 3)     {
                    if(bazaDate.empty()) std::cout<<" Baza de date este goala \n";
                    for (size_t i =0; i<bazaDate.size(); ++i) {
                         std::cout<<i<<". ";
                         bazaDate[i]-> afisare();
                         std::cout<<"\n";
                    }
               }
          }
          catch (const EroareValidare& e) {
               std::cerr << "Eroare: " <<e.what()<<std::endl;
          }
     }
}