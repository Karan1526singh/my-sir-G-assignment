#include<iostream>
using namespace std;
class cube
{
public :
    cube(int a)
    {
        int v;
        v=a*a*a;
        cout<<"The volume of cube is "<<v;
    }
};
int main()
{
    cube a(3);
}
