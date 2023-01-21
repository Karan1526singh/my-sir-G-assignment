#include<iostream>
using namespace std;
class Aa
{
    private :
    int x;

public :
    void setdata(int x)
    {
        this->x=x;
    }
    virtual void display()
    {
        cout<<"hello world";
    }
};
class Ca : public Aa
{
public :
    void display()
    {
        cout<<"hi";
    }
};
int main()
{
    Aa *a, f;
    Ca *k,o;
    k=&o;
    k->setdata(23);
    k->display();
}
