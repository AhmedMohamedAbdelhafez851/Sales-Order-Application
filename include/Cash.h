#ifndef CASH_H
#define CASH_H
#include <iostream>
using namespace std;

class Cash
{
public:
    Cash();
    void Cash_read();
    double getcash_value();
    virtual ~Cash();

protected:

private:
    double cashvalue;
};

#endif // CASH_H
