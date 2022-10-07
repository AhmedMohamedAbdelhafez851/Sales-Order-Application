#include "Credit.h"

Credit::Credit()
{
    //ctor
}

Credit::~Credit()
{
    //dtor
}
void Credit::Credit_read( )
{
    cout<<"Enter your number please :"<<endl;
    cin>>number;
    cout<<"Enter The Credit type please :"<<endl;
    cin>>type;
    cout<<"Enter The expire date please :"<<endl;
    cin>>expiredate;

}
void Credit:: getcredit_info()
{
    cout<<"The customer number is : "<<number;
    cout<<"The Credit type is : "<<type;
    cout<<"The expire date is : "<<expiredate;


}
