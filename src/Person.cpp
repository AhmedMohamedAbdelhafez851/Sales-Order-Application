#include "Person.h"

Person::Person()
{

}
Person::Person(string billing_address,string fullname)
{

    this->billing_address=billing_address;
    this->fullname;

}
Person::~Person()
{
    //dtor
}
string Person::read()
{

    cout<<"enter billing_address"<<endl;
    cin>>billing_address;
    cout<<"enter fullname:"<<endl;
    cin>>fullname;



}
string Person::print()
{

    cout<<"billing_address"<<billing_address<<"fullname"<<endl;


}
