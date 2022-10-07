#ifndef PAYMENT_H
#define PAYMENT_H
#include "Cash.h"
#include "Check.h"
#include "Credit.h"
#include <iostream>
using namespace std;

class Payment
{
public:
    Payment();
    double pay();
    string update();

    virtual ~Payment();


protected:

private:
    string paidDate;
    double Amount;
};

#endif // PAYMENT_H
