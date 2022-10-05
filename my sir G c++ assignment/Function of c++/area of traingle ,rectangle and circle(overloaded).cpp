#include<iostream>
using namespace std;
float area(float r)
{
    return(r*r*3.14);;
}
float area(int b,int h)
{
    return(0.5*(h*b));
}
int area(double h,double w )
{
    return (w*h);
}
int main()
{
    cout<<"area of circle is "<<area(1.2)<<endl;
    cout<<"area of traingle is "<<area(4,6)<<endl;
    cout<<"area of rectangle is "<<area(3.5,6.4);
}
