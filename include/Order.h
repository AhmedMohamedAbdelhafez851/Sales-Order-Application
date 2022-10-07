#include <cstring>
#include <iostream>
using namespace std;
#ifndef ORDER_H
#define ORDER_H


class Order
{
public:
    Order();

    Order(unsigned int id, unsigned int number, unsigned int date, string status);

    void  creatorder();
    void print();
    void update();
    void edit();
    virtual ~Order();
protected:
private:
    unsigned int m_id;
    unsigned int m_number;
    unsigned int m_date;
    string m_status;
};

#endif // ORDER_H
