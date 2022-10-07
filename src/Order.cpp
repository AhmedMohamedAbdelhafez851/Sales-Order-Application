#include "Order.h"
#include <iostream>
using namespace std;

Order::Order()
{

}
Order::Order(unsigned int id, unsigned int number, unsigned int date, string status)
{
    m_id = id;
    m_number = number;
    m_status = status;
    m_date = date;
}

Order::~Order()
{
}
void Order::creatorder()
{
    cout << "please Enter the product id ...";
    cin >> m_id;
    cout << " Enter the product amount  ...";
    cin >> m_number;
    cout << "Date of buying ...";
    cin >> m_date;



}

void Order::update()
{
    cout << " Enter the new id..........";
    cin >> m_id;
    cout << "enter the status.........";
    cin >> m_status;
}
void Order::edit()
{
    cout << "enter the product id.........";
    cin >> m_id;
}

void Order::print()
{
    cout << "the product id " << m_id << "\t" << "the product number" << m_number << "\t" << "Date of buying" << m_date << endl;
}
