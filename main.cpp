#include <iostream>
#include<fstream>
#include<string>
#include<Stock.h>
#include<Product.h>
#include<Customers.h>
#include<Cusotmer.h>
#include<Person.h>
#include<Company.h>
#include<Order.h>
#include<orderItem.h>
#include<Payment.h>
#include<Credit.h>
#include<Cash.h>
#include<Check.h>
#include<Transaction.h>
using namespace std;

int main()
{
    int c=1;
    while(c!=0)
    {
        cout<<"WELCOME IN OUR SYSTEM FOR SALES ORDER"<<endl
            <<"1. Details For DATA ENTRY"<<endl
            <<"2. Details For SALES PROCESS"<<endl
            <<"3. Details For PRINT"<<endl
            <<"0. EXIT"<<endl
            <<"NOW YOU CAN GIVE US YOUR CHOICE ^_^ "<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
        {
           Customers Cs;
            Stock S;
            int c=1;
            while(c!=0)
            {
                cout<<"*WELCOME IN Details For DATA ENTRY*"<<endl
                    <<"1. Add New Customer"<<endl
                    <<"2. Update a Customer"<<endl
                    <<"3. Delete a Customer"<<endl
                    <<"4. Add New Product in Stock"<<endl
                    <<"5. Update a Product in Stock"<<endl
                    <<"6. Delete a Product in Stock"<<endl
                    <<"0. EXIT AND SAVE"<<endl
                    <<"NOW YOU CAN GIVE US YOUR CHOICE ^_^ "<<endl;
                int h;
                cin>>h;
                switch(h)
                {
                case 1:
                {
                    Cs.addCustomer();
                    break;
                }
                case 2:
                {
                    Cs.editCustomer();
                    break;
                }
                case 3:
                {
                    int id_1;
                    cin>>id_1;
                    Cs.deleteCustomer(id_1);
                    break;
                }
                case 4:
                {
                    S.AddStock();
                    break;
                }
                case 5:
                {
                    int id;
                    cin>>id;
                    S.UpdataProduct(id);
                    break;
                }
                case 6:
                {
                    int id;
                    cin>>id;
                    S.DeletProduct(id);
                    break;
                }
                case 0:
                    return 0;
                }
            }
            break;
        }
        case 2:
        {   Order o;
            orderItem oi ;
            Transaction T;
            Payment P;
            int k=-1;
            while(k!=0)
            {
                cout<<"*WELCOME IN Details For SALES PROCESS*"<<endl
                    <<"1. Add Transaction"<<endl
                    <<"2. Update Order"<<endl
                    <<"3. Pay Order"<<endl
                    <<"0. EXIT AND SAVE"<<endl
                    <<"NOW YOU CAN GIVE US YOUR CHOICE ^_^ "<<endl;
                cin>>k;
                switch(k)
                {
                case 1:
                    T.read();
                    break;
                case 2:

                    o.update();

                    break;
                case 3:
                    P.pay();
                    break;
                case 0:
                    return 0;
                }
            }
            break;
        }
        case 3:
        {
            Customers Cs;
            Stock S;
            Transaction T;
            int m=1;
            while(m!=0)
            {
                cout<<"*WELCOME IN Details For PRINT*"<<endl
                    <<"1. Print Customers"<<endl
                    <<"2. Print Stock data"<<endl
                    <<"3. Print Transactions"<<endl
                    <<"NOW YOU CAN GIVE US YOUR CHOICE ^_^ "<<endl;
                cin>>m;
                switch(m)
                {
                case 1:
                {
                    Cs.print();
                    break;
                }
                case 2:
                {

                    S.print();
                    break;
                }
                case 3:
                {
                    T.print();
                    break;
                }

                }
            }
            break;
        }
        case 0:
        {
            cout<<"Thanks :)"<<endl;
            return 0;
        }
        default:
            cout<<"TRY AGAIN"<<endl;

        }
    }

    return 0;
}
