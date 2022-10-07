#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <cstring>
#include <Payment.h>
#include <Order.h>
using namespace std;

class Transaction
{
public:
    Transaction();
    ~Transaction();
    void read();
    void addOrder();
    void getOrder();
    void print();
    friend ostream&operator <<(ostream &out, Transaction &T);
    friend Transaction operator +=(Transaction T, Payment P);

protected:
    string Transaction_date;
    int m_count;
    Order*orderList;
    int listSize;
};
#endif // TRANSACTION_H
