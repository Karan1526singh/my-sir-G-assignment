#include<iostream>
using namespace std;
class circle
{
public :
    float area(int r)
    {
        float a;
        a=3.14*r*r;
        return a;
    }
};
int main()
{
    circle r;
    cout<<"area of circle is " <<r.area(2.2);
}

