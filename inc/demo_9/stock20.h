// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock20
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
	Stock20();        // default constructor
    Stock20(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock20();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock20 & topval(const Stock20 & s) const;
};

#endif
