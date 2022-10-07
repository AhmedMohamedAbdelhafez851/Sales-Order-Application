#include "Transaction.h"
#include"Payment.h"
#include"Order.h"

Transaction::Transaction()
{
    Transaction_date="UNKNOWN";
    m_count=0;
    listSize=0;
    orderList=new Order[listSize];
}

Transaction::~Transaction()
{
    delete [] orderList;
}
void Transaction::print()
{
    Transaction t;
    cout<<t;
}
void Transaction::read()
{
    Order c;
    c.creatorder();
    cout<<"Enter Transaction: "<<endl;
    cin>>Transaction_date;
}
void Transaction::addOrder()
{

    Order *new_order = new Order();

    orderList[m_count++] = *new_order;
}
void Transaction:: getOrder()
{
    if(m_count==0)
    {
        cout<< "YOU DONT REQUEST ANY ORDER"<<endl;
        return;
    }
    for(int i=0; i<m_count; ++i)
    {
        orderList[i].creatorder();
    }
}
ostream&operator <<(ostream &out, Transaction &T)
{
    cout << "Transaction_date is : " << T.Transaction_date<<endl;
    return out;
}
Transaction  operator += (Transaction T, Payment P)
{
    if(T.m_count==0)
    {
        cout<<"NO INCREASE IN TRANSACTION"<<endl;
    }
    else
        T+=P;
}
