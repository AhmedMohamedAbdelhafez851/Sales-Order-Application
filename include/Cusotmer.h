#ifndef CUSOTMER_H
#define CUSOTMER_H
#include<iostream>
using namespace std ;

class Cusotmer
{
private:
    int id ;
    string phone ;
public:
    Cusotmer();
    Cusotmer(int ,string);
    virtual ~Cusotmer();
    void input();
    int getId();
    string  print();
    friend istream&operator>>(istream &input,Cusotmer &c);
    friend ostream & operator <<(ostream &output, Cusotmer &c);
};

#endif // CUSOTMER_H
