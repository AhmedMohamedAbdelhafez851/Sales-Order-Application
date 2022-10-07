#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <iostream>
#include <string>

class Person
{
public:
    Person();
    virtual ~Person();
    Person( string billing_address,string fullname);
    string read();
    string print();
protected:

private:
    string billing_address;
    string fullname;
};

#endif // PERSON_H
