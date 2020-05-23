/*************************************************************************
    > File Name: classic.cpp
    > Author: Weizhuo Zhang (Ray)
    > Mail: wzhuo.zhang@gmail.com
    > Created Time: Sat 23 May 2020 23:28:47 CST
 ************************************************************************/

#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char *s1, const char *s2, int n, double x) {
    std::strncpy(performers, s1, std::strlen(s1) - 1);
    performers[std::strlen(s1) - 1] = '\0';
    std::strncpy(label, s2, std::strlen(s2) - 1);
    label[std::strlen(s2) - 1] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    std::strncpy(performers, d.performers, std::strlen(d.performers) - 1);
    performers[std::strlen(d.performers) - 1] = '\0';
    std::strncpy(label, d.label, std::strlen(d.label) - 1);
    label[std::strlen(d.label) - 1] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const {
    std::cout << std::endl << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}

Classic::Classic(const char *desc, const char *s1, const char *s2,
                 int n, double x) : Cd(s1, s2, n, x) {
    description = new char[std::strlen(desc) + 1];
    strcpy(description, desc);
}

Classic::Classic(const Classic &rc) : Cd(rc) {
    description = new char[std::strlen(rc.description) + 1];
    strcpy(description, rc.description);
}

Classic::~Classic() {
    delete [] description;
}

void Classic::Report() const {
    this->Cd::Report();
    std::cout << "Description: " << description << std::endl << std::endl;
}

Classic & Classic::operator=(const Classic &rc){
    if (this == &rc) {
        return *this;
    }
    Cd::operator=(rc);
    delete [] description;
    description = new char[std::strlen(rc.description) + 1];
    strcpy(description, rc.description);
    return *this;
}
