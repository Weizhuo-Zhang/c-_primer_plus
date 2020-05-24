// dma.cpp -- dma class methods

#include "dma.h"
#include <cstring>

// DmaABC methods
DmaABC::DmaABC(const char *l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DmaABC::DmaABC(const DmaABC & rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

DmaABC::~DmaABC() {
    delete [] label;
}

void DmaABC::View() const {
    std::cout << "Label: " << label << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

DmaABC & DmaABC::operator=(const DmaABC & rs) {
    if (this == &rs) {
        return *this;
    }
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const DmaABC & rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// baseDMA methods
void baseDMA::View() const {
    std::cout << "Displaying baseDMA objects:\n";
    DmaABC::View();
}

// baseDMA & baseDMA::operator=(const baseDMA & rs) {
//     return DmaABC::operator=((const DmaABC &) rs);
// }
// 
// std::ostream & operator<<(std::ostream & os, const baseDMA & rs) {
//     return DmaABC::operator<<(os, (const DmaABC &) rs);
// }

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : DmaABC(l, r)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char * c, const DmaABC & rs) : DmaABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const {
    std::cout<< "Displaying lacksDMA objects:\n";
    DmaABC::View();
    std::cout << "Color: " << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const DmaABC &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : DmaABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const DmaABC & rs) : DmaABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : DmaABC(hs) // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

void hasDMA::View() const {
    std::cout << "Displaying hasDMA objects:\n";
    DmaABC::View();
    std::cout << "Style: " << style << std::endl;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs) {
        return *this;
    }
    DmaABC::operator=(hs); // copy base constructor
    delete [] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const DmaABC &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}
