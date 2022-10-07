#include <iostream>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
public:
    Product();
    Product(int id,int type,string number,string name,double price);
    void update();
    int getID();
    friend istream&operator>>(istream &input,Product &p);
    friend ostream & operator <<(ostream &output, Product &p);
    ~Product();

private:
    int id,type;
    string number,name;
    double price;

};


#endif
