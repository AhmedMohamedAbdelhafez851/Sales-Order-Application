#include "orderItem.h"

orderItem::orderItem()
{
    salePrice=0;
    quantity=0;
}
orderItem::orderItem(double salePrice,double quantity)
{
    this->salePrice=salePrice;
    this->quantity=quantity;
}

orderItem::~orderItem()
{
    //dtor
}
void orderItem::Read()
{
    cout<<"Enter The Quantity : ";
    cin>>quantity;
    cout<<"Enter Sale Price : ";
    cin>>salePrice;
}
void orderItem::upDateQuantity(double newQuantity)
{
    cout<<"Enter New Quantity : ";
    cin>>newQuantity;
    quantity=newQuantity;
}
int orderItem::OPeratorIncrease1()
{
    if((quantity+1)<=stk.GetQuantity())
    {
        quantity++;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OperatorDecrease1()
{
    if((quantity-1)<=stk.GetQuantity())
    {
        quantity--;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OPeratorIncreaseN(int n)
{
    cout<<"Enter the extra amount : ";
    cin>>n;
    if((n+quantity)<=stk.GetQuantity())
    {
        quantity+=n;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OperatorDecreaseN(int n)
{
    cout<<"Enter the missing amount : ";
    cin>>n;
    if((n+quantity)<=stk.GetQuantity())
    {
        quantity-=n;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::print()
{
    cout<<"The Quantity : "<<quantity<<endl<<"Sale Price : "<<salePrice<<endl;
}
