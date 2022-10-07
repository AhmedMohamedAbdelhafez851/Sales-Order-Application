#ifndef CHECK_H
#define CHECK_H
#include <iostream>
using namespace std;

class Check
{
public:
    Check();
    void check_read( );
    void getcheck_info();

    virtual ~Check();

protected:

private:
    string name;
    string bankId;
};

#endif // CHECK_H
