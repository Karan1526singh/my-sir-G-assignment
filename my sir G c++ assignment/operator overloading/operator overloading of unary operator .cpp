#include<iostream>
using namespace std;
class check_unary
{
private :
    int a;
public :
    void set(int x)
    {
        a=x;
    }
    void operator++()
    {
        int k=++a;
        cout<<"pre increament operator"<<k<<endl;
    }
    void operator++(int)
    {
        int k=a++;
        cout<<"post increament operator"<<k<<endl;
    }
    void operator--()
    {
        int k = --a;
        cout<<"pre decreament operator"<<k<<endl;
    }
    void operator--(int)
    {
        int k=a--;
        cout<<"post decreament operator"<<a;
    }
  bool operator>(check_unary c)
    {
        if(a>c.a)
        {
            return 1;
        }
        else
            return 0;
    }
};
int main()
{
check_unary c1,c2,c3,c4;
c1.set(45);
c2.set(4);
c3.set(3);
c4.set(5);
++c1;
c2++;
--c3;
if(c1>c2)
{
    cout<<"done";
}
else
    cout<<"not done";
    c4--;
    }


