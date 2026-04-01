#include <iostream>
#include "Meniu.h"
#include "continutMedia.h"
#include "videoclipMuzica.h"

int main() {
    try {
        Meniu aplicatie;
        aplicatie.ruleaza();
    }
    catch (const std::exception& e) {
        std::cerr << "Eroare fatala: " << e.what() << std::endl;
    }
    return 0;
}