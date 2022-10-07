#ifndef ORDERITEM_H
#define ORDERITEM_H
#include"Stock.h"
#include <iostream>
using namespace std;

class orderItem
{
protected:
    double salePrice;
    double quantity;
    Stock stk;
public:
    orderItem();
    orderItem(double salePrice,double quantity);
    void Read();
    void upDateQuantity(double newQuantity);
    int OPeratorIncrease1();
    void OperatorDecrease1();
    void OPeratorIncreaseN(int n);
    void OperatorDecreaseN(int n);
    void print();
    virtual ~orderItem();
};

#endif // ORDERITEM_H
