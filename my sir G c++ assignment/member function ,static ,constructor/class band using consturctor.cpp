#include<iostream>
using namespace std;
class Bank
{
private :
    int principal;
    int roi;
    int year;
public :
    Bank(int x,int y,int z)
    {
        int principal=x;
        int roi=y;
        int year=z;
    }
    void calculateroi()
    {
        int result;
        result = (principal * roi * year) / 100;
        cout<<"rate of intrest is "<<result;
    }
};
int main()
{
    Bank b(1000,10,1);
    b.calculateroi();
}
