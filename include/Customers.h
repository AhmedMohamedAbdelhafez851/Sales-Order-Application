#ifndef CUSTOMERS_H
#define CUSTOMERS_H
using namespace std;
#include <iostream>
#include <Cusotmer.h>
#include <cstring>

class Customers: public Cusotmer
{
public:
    string print();
    void editCustomer();
    void addCustomer();
    void deleteCustomer(int);
    Customers();
    virtual ~Customers();
protected:
    string phone;
    int counter,listSize;
    Cusotmer *customerList;
};

#endif // CUSTOMERS_H

