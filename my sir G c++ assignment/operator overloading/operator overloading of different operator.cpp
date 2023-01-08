#include<iostream>
using namespace std;
class complex
{
private :
    int a,b;
public :
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    complex operator*(complex c)
    {
        complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    int operator==(complex c)
    {
        if(c.a==a && c.b==b)
            return 1;
        return 0;
    }
};
int main()
{
    complex c1,c2,c3,c4,c5;
    c1.set(3,5);
    c2.set(4,6);
    c3=c1+c2;//or c1.operator+(c2);
    c3.show();
    c4=c1-c2;//or c1.operator-(c2);
    c4.show();
    c5=c1*c2;//or c1.operator*(c2);
    c5.show();
    bool c6;
    c6=c1==c2;//or c1.operator==(c2);
    if(c6)
        cout<<"true";
    else
        cout<<"false";
}
