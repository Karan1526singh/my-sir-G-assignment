#include<iostream>
using namespace std;
class complex
{
    int a,b;
public :
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<"+"<<"i"<<b<<endl;
    }
    void add(complex c1)
    {
        cout<<"addition is"<<a+c1.a<<"+"<<"i"<<b+c1.b;
    }
};
int main()
{
    complex c,c1;
    c.set(4,5);
    c1.set(3,5);
    c.show_data();
    c1.show_data();
    c.add(c1);
}
