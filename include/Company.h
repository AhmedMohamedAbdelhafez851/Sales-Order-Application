#ifndef COMPANY_H
#define COMPANY_H
using namespace std;
#include <iostream>
#include <string>
class Company
{
public:
    Company();
    Company(string location,string company_name );
    virtual ~Company();
    string read();
    string print();


private:
    string location;
    string company_name;
};

#endif // COMPANY_H
