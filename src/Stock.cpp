#include "Stock.h"
#include "iostream"
#include "cstring"
#include "Product.h"


using namespace std ;

Stock::Stock()
{
    product_id =0;
    product_quantity=0;
    listCount=0;
    stock_count = 0;
    counter =0;
    listSize=5;
    ProductList= new Product [listSize];
}
Stock::Stock(int id,int quantity)
{
    this->product_id=id;
    this->product_quantity=quantity;

}

Stock::~Stock()
{
    delete [] ProductList;
}
void Stock :: input()
{
    cout<<"Inter product id : ";
    cin>>product_id ;
    cout<<"Inter product quantity : ";
    cin>>product_quantity ;
}
void Stock ::print()
{
    Stock s;
    cout<<s;
}
void Stock :: AddStock()
{
    Stock *new_stock = new Stock();
    new_stock->input();
    stockList[stock_count++] = *new_stock;

}
void Stock :: UpdataProduct(int product_id)
{
    if(listCount==0)
    {
        cout<<"NO STOCK EXIST~!\n";
        return ;
    }
    bool updated=false;
    for(int i=0; i<listCount; ++i)
    {
        if(ProductList[i].getID()==product_id)
        {
            ProductList[i].update();

            updated = true;
            break;
        }
    }
    if(updated)
    {
        cout<<"PRODUCT EDITED SUCESSFULLY!\n";
    }
    else
    {
        cout<<"NO PRODUCT EXIST\n";
    }

}
void Stock :: DeletProduct(int product_id)
{
    if(listCount==0){
        cout<<"NO PRODUCT EXIST~!\n";
        return ;
    }
    bool deleted=false;

    for(int i=0;i<listCount;++i){
        if(ProductList[i].getID()==product_id){
            if(i==listCount-1){
                listCount--;
            }else{
                ProductList[i]= ProductList[listCount-1];
                listCount--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted){
        cout<<"PRODUCT DELETED SUCESSFULLY!\n";
    }else{
        cout<<"NO PRODUCT EXIST\n";
    }
}
int Stock :: GetQuantity()
{
    return product_quantity;
}
ostream&operator <<(ostream &output, Stock &s)
{
    output << "Product id : " << s.product_id<<endl;
    return output;
}
istream&operator >>(istream &input,Stock &s)
{
    cout<<"Enter product id : ";
    input >> s.product_id;
    cout<<endl;
    cout<<"Enter product Quantity: ";
    input >> s.product_quantity;
    cout<<endl;
    return input;
}
