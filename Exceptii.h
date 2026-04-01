#ifndef EXCEPTII_H
#define EXCEPTII_H

#include <exception>
#include <string>

class EroareValidare : public std::exception {
    std::string mesaj;
public:
    explicit EroareValidare(const std::string& m);
    const char* what() const noexcept override;
};

#endif