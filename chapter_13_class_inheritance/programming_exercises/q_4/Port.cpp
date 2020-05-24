/*************************************************************************
    > File Name: Port.cpp
    > Author: Weizhuo Zhang (Ray)
    > Mail: wzhuo.zhang@gmail.com
    > Created Time: Sun 24 May 2020 19:05:20 CST
 ************************************************************************/
#include <iostream>
#include <cstring>
#include "Port.h"

Port::Port(const char *br, const char *st, int b) {
    brand = new char[std::strlen(br) + 1];
    std::strcpy(brand, br);
    std::strncpy(style, st, STYLE_LEN - 1);
    style[STYLE_LEN - 1] = '\0';
    bottles = b;
}

Port::Port(const Port & p) {
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::strncpy(style, p.style, STYLE_LEN - 1);
    style[STYLE_LEN - 1] = '\0';
    bottles = p.bottles;
}

Port & Port::operator=(const Port &p) {
    if (this == &p) {
        return *this;
    }
    delete [] brand;
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::strncpy(style, p.style, STYLE_LEN - 1);
    style[STYLE_LEN - 1] = '\0';
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b) {
    if (bottles >= b) {
        bottles -= b;
    }
    return *this;
}

void Port::Show() const {
    std::cout << *this << std::endl;
}

ostream & operator<<(ostream & os, const Port & p) {
    os << "Brand: " << p.brand << std::endl;
    os << "Kind: " << p.style << std::endl;
    os << "Bottles: " << p.bottles << std::endl;
    return os;
}

VintagePort::VintagePort(const char *br, int b,
                        const char *nn, int y) : Port(br, "none", b) {
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port() {
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort &vp) {
    if (this == &vp) {
        return *this;
    }
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    std::cout << *this << std::endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
    os << (const Port &) vp;
    os << "Nickname: " << vp.nickname << std::endl;
    os << "Year: " << vp.year << std::endl;
    return os;
}
