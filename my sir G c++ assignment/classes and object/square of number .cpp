#include<iostream>
using namespace std;
class squares
{
public :

    void square(int n)
    {
        static int calling_count=0;
        int k;
        k=n*n;
        calling_count++;
        cout<<"the square of"<<n<<"is"<<k<<endl;
        cout<<"Total number of function calling is "<<calling_count<<endl;
    }
};
int main()
{
    squares s;
    s.square(3);
    s.square(4);
    s.square(5);
    s.square(6);
    s.square(7);
    s.square(8);
}
