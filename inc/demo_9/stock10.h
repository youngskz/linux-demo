// stock10.h – Stock class declaration with constructors, destructor added
#ifndef STOCK1_H_
#define STOCK1_H_
#include <string>
class Stock10
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock10();        // default constructor
    Stock10(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock10();       // noisy destructor
    
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
