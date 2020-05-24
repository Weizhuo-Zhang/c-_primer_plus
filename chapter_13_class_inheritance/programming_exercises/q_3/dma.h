// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// DMA Abstract Base Class
class DmaABC
{
private:
    char *label;
    int rating;
public:
    DmaABC(const char *l = "null", int r = 0);
    DmaABC(const DmaABC & rs);
    virtual ~DmaABC();
    virtual void View() const = 0;
    DmaABC & operator=(const DmaABC & rs);
    friend std::ostream & operator<<(std::ostream & os, const DmaABC & rs);
};

// Base Class Using DMA
class baseDMA : public DmaABC
{
public:
    baseDMA(const char *l = "null", int r = 0) : DmaABC(l, r) { };
    baseDMA(const baseDMA & rs) : DmaABC(rs) { };
    void View() const;
    // baseDMA & operator=(const baseDMA & rs);
    // friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public DmaABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const DmaABC & rs);
    void View() const;
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

// derived class with DMA
class hasDMA : public DmaABC
{
private:
    char * style;

public:
    hasDMA(const char * s = "none", const char * l = "null",
           int r = 0);
    hasDMA(const char * s, const DmaABC & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    void View() const;
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
