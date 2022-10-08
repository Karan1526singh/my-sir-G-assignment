#include<iostream>
using namespace std;
class areas
{
public :
    float circle(int r)
    {
        float a;
        a=3.14*r*r;
        return a;
    }
    int rectangle(int b, int h)
    {
        int a;
        a=b*h;
        return a;
    }
};
int main()
{
    areas r;
    cout<<"area of circle is " <<r.circle(2.2)<<endl;
    cout<<"area of rectangle is " <<r.rectangle(2,4);
}


