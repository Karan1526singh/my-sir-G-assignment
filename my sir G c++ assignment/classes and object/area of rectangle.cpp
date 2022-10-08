#include<iostream>
using namespace std;
class rectangle
{
public :
    int area(int b, int h)
    {
        int a;
        a=b*h;
        return a;
    }
};
int main()
{
    rectangle r;
    cout<<"area of rectangle is " <<r.area(4,6);
}
