#include <vector>
#include <memory>
#include "continutMedia.h"
#include <string>

class Meniu {
     std::vector<continutMedia*> bazaDate; 
     public:
          void ruleaza() ;
          ~Meniu() {
               for ( auto item: bazaDate) delete item;
          }
};