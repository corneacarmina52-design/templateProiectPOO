#include "Exceptii.h"

EroareValidare::EroareValidare(const std::string& m) : mesaj(m) {}

const char* EroareValidare::what() const noexcept {
    return mesaj.c_str();
}
