#ifndef CREDIT_H
#define CREDIT_H
#include <iostream>
using namespace std;

class Credit
{
public:
    Credit();
    void Credit_read();
    void getcredit_info();

    virtual ~Credit();

protected:

private:
    string number;
    string type;
    string expiredate;
};

#endif // CREDIT_H
