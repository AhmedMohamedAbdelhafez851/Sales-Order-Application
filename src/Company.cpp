#include "Company.h"
using namespace std;
Company::Company()
{

}
Company::Company(string location,string company_name)
{

    this->location=location;
    this->company_name=company_name;


}
Company::~Company()
{
    //dtor
}

string Company::read()
{

    cout<<"enter location please/////"<<endl;
    cin>>location;
    cout<<"enter company_name please \\\\"<<endl;
    cin>>company_name;
}
string Company::print()
{


    cout<<"location"<<location<<"company_name"<<company_name<<endl;

}
