#include "Cash.h"

Cash::Cash()
{
    cashvalue=0;
}

Cash::~Cash()
{
    //dtor
}
void Cash:: Cash_read( )
{
    cout<<"Enter cash value :"<<endl;
    cin>>cashvalue;

}
double Cash:: getcash_value()
{
    return cashvalue;
}
