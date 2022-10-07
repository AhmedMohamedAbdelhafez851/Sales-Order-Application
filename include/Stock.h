#ifndef STOCK_H
#define STOCK_H
#include "Stock.h"
#include "Product.h"
#include "iostream"
using namespace std ;

class Stock
{
private:
    int product_id,product_quantity,listCount,stock_count,listSize,counter;
    Product *ProductList;
    Stock *stockList;


public:
    Stock();
    Stock(int,int);
    ~Stock();
    friend istream&operator>>(istream &input,Stock &s);
    friend ostream & operator <<(ostream &output,Stock &s);
    void  input();
    void  AddStock();
    void  UpdataProduct(int );
    void  DeletProduct(int );
    int  GetQuantity();
    void print();
};

#endif // STOCK_H
