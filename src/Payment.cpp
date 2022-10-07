#include "Payment.h"

Payment::Payment( )
{

    cout<<"Enter The pay date :"<<endl;
    cin>>paidDate;
    cout<<"Enter The Amount :"<<endl;
    cin>>Amount;
    pay();

}

Payment::~Payment()
{
    //dtor
}
// creating objects ==================
Cash o;
Check b;
Credit j;

double Payment:: pay()
{
    cout<< "How do you want to pay ?"<<endl;
    cout<<" 1- Cash\n 2- Check\n 3- Credit\n";;
    int type;
    cin>>type;
    switch(type)
    {
    case 1:
        o.Cash_read();
        break;
    case 2:

        b.check_read();
        break;
    case 3:

        j.Credit_read();
        break;

    }

}

