#include <iostream>
using namespace std;

class Port
{
private:
    enum { STYLE_LEN = 20 };
    char * brand;
    char style[STYLE_LEN];  // i.e., tawny, ruby, vintage
    int bottles;
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);                 // Copy constructor
    virtual ~Port() { delete [] brand; }
    Port & operator=(const Port & p);
    Port & operator+=(int b);             // Adds b to bottles
    Port & operator-=(int b);             // Substracts b to bottles, if available
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream & operator<<(ostream & os, const Port & p);
};

class VintagePort : public Port // style necessarily = "vintage
{
private:
    char *nickname;             // i.e., "The Noble" or "Old Velvet", etc.
    int year;                   // Vintage year
public:
    VintagePort(const char *br = "none", int b = 0,
                const char *nn = "none", int y = 0);
    VintagePort(const VintagePort &vp);
    ~VintagePort() { delete [] nickname; }
    VintagePort & operator=(const VintagePort &vp);
    void Show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);
};
