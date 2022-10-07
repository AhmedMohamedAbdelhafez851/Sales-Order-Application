#include "Cusotmer.h"
#include "Customers.h"
Cusotmer::Cusotmer()
{
    id =0;
    phone =" ";
}


Cusotmer::Cusotmer(int id,string phone )
{
    this ->id=id ;
    this ->phone=phone  ;
}
Cusotmer::~Cusotmer()
{
    //dtor
}
void Cusotmer::input()
{
    cout<< "Enter id : ";
    cin>>id;
    cout<<endl;
    cout<<"Enter phone : " ;
    cin>>phone ;
    cout<<endl;
}
string Cusotmer::print()
{
    return phone + to_string( id);
}
ostream&operator <<(ostream &output, Cusotmer &c)
{
    output << " id : " << c.id<<endl;
    return output;
}
istream&operator >>(istream &input,Cusotmer &c)
{
    cout<<"Enter  id : ";
    input >> c.id;
    cout<<endl;
    cout<<"Enter  Phone : ";
    input >> c.phone ;
    cout<<endl;
    return input;
}
int Cusotmer::getId()
{
    return id;
}
