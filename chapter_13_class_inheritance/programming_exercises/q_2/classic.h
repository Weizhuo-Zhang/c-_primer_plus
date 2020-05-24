// base class
class Cd
{
private:
    char *performers;
    char *label;
    int selections;   // number of selections
    double playtime;  // playing time in minutes
public:
    Cd(const char *s1 = "null", const char *s2 = "null",
       int n = 0, double x = 0.0);
    Cd(const Cd &d);
    virtual ~Cd();
    virtual void Report() const; // reports all CD data
    Cd & operator=(const Cd &rc);
};

class Classic : public Cd
{
private:
    char *description;
public:
    Classic(const char *desc = "null", const char *s1 = "null",
            const char *s2 = "null", int n = 0, double x = 0.0);
    Classic(const Classic &rc);
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic &rc);
};
