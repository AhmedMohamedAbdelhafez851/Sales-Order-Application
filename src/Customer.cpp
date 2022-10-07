class Customer
{
private:
    int id_c;
    string phone;
public:
    Customer():id_c(0),phone("UnKnowen")
    {
    }
    Customer(int i,string p)
    {
        id_c=i;
        phone=p;
    }
    void read()
    {
        cout<<"Id :"<<endl;
        cin>>id_c;
        cout<<"Phone :"<<endl;
        cin>>phone;
    }
     int getId()
    {
        return id_c;
    }
    void print ()
    {
        cout<<"the is is: "<<id_c<<endl;
        cout<<"the phone is: "<<phone<<endl;
    }
    friend ostream&operator<<(ostream&out,Customer &c);
    friend istream&operator>>(istream&in,Customer &c);
};
ostream&operator<<(ostream&out,Customer& c)
{
    out<<"id : "<<c.id_c<<endl;
    out<<"phone : "<<c.phone<<endl;
    return out;
}
istream&operator>>(istream&in,Customer& c)
{
    in>>c.id_c>>c.phone;
    return in;
}
