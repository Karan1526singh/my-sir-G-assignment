#include<iostream>
using namespace std;
class fact
{
private :
    int fact;
public :
    void set(int n)
    {
        fact=n;
    }
    void print_fact()
    {
        int result= 1;
        for(int i=fact;i!=0;i--)
        {
            result=i * result;
        }
        cout<<"The factorial of "<<fact<<" is "<<result;
    }
};
int main()
{
    fact f;
    f.set(5);
    f.print_fact();
}
