#include "Customers.h"
#include "Cusotmer.h"
Customers::Customers()
{
    counter=0;
    listSize=5;
    customerList = new Cusotmer[listSize];
}

Customers::~Customers()
{
    delete [] customerList;
}
string Customers::print()
{
   return Cusotmer::print();
}
void Customers ::addCustomer()
{
    Cusotmer *new_customer =new Cusotmer();
    new_customer->input();
    customerList[counter++]=*new_customer;
}
void Customers::deleteCustomer(int Id)
{
    if (counter==0)
    {
        cout<<"no customer exiest\n";
        return;
    }
    bool deleted=false;
    for (int i=0; i<counter; ++i)
    {
        if(customerList[i].getId()==Id)
        {
            if(i==counter-1)
            {
                counter--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted)
    {
        cout<<"customer Deleted Successfully!\n";
    }
    else
    {
        cout<<"NO Customer Exist\n";
    }
}
void Customers::editCustomer()
{
    int id;
    cin>>id;
    if(counter==0)
    {
        cout<<"NO CUSTOMER EXIST"<<endl;
        return ;
    }
    bool upDated=false;
    for(int i=0; i<counter; ++i)
    {
        if(customerList[i].getId()==id)
        {
            customerList[i].input();
            upDated = true;
            break;
        }
    }
    if(upDated)
    {
        cout<<"CUSTOMER EDITED SUCESSFULLY"<<endl;
    }
    else
    {
        cout<<"NO CUSTOMER EXIST"<<endl;
    }
}




