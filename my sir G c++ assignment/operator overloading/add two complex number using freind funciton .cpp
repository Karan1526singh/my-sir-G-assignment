#include<iostream>
using namespace std;
class complex
{
private :
    int a,b;
public :
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout<<a<<"+"<<"i"<<b;
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
int main()
{
    complex c1,c2,c3,c4;
    c1.setdata(4,6);
    c2.setdata(5,7);
    c4=c1+c2;//operator+(c1,c2);
    c4.showdata();
}
