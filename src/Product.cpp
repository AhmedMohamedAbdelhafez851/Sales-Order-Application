#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
    id = 0;
    number = "NULL";
    name = "UNKNOWN";
    price = 0;
    type = 0;
}
Product::Product(int id,int type,string number,string name,double price)
{
    this->id = id;
    this->name = name;
    this->number = number;
    this->price = price;
    this->type = type;
}

Product::~Product()
{

}
void Product::update()
{
    cout<<"Enter new id : ";
    cin>>id;
    cout<<endl;
    cout<<"Enter new name : ";
    cin>>name;
    cout<<endl;
    cout<<"Enter new number : ";
    cin>>number;
    cout<<endl;
    cout<<"Enter new price : ";
    cin>>price;
    cout<<endl;
    cout<<"Enter new type : ";
    cin>>type;
    cout<<endl;
}
int Product::getID()
{
    return id;
}
ostream&operator <<(ostream &output, Product &p)
{
    output << "Product id : " << p.id << endl << "Product Name : " << p.name << endl << "Product Number : " << p.number << endl << "Product Price : " << p.price << endl << "Product Type : " << p.type << endl;
    return output;
}
istream&operator >>(istream &input,Product &p)
{
    cout<<"Enter product id : ";
    input >> p.id;
    cout<<endl;
    cout<<"Enter product name : ";
    input >> p.name;
    cout<<endl;
    cout<<"Enter product number : ";
    input >> p.number;
    cout<<endl;
    cout<<"Enter product price : ";
    input >> p.price;
    cout<<endl;
    cout<<"Enter product type : ";
    input >> p.type;
    cout<<endl;
    return input;
}
