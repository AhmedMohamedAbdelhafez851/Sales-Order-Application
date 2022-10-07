#include "Check.h"

Check::Check()
{
    //ctor
}

Check::~Check()
{
    //dtor
}
void Check:: check_read( )
{
    cout<<"Enter your name please :"<<endl;
    cin>>name;
    cout<<"Enter your bankId please :"<<endl;
    cin>>bankId;


}
void Check:: getcheck_info()
{
    cout<<"The customer name is : "<<name;
    cout<<"The customer bankId is : "<<bankId;

}
