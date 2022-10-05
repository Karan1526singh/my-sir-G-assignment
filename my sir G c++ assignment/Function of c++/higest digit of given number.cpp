#include<iostream>
using namespace std;
int heighestValueDigit(int n)
{
    int max=0;
    int k;
    for(int i=0;n!=0;i++)
    {
        if(max<n%10)
            max=n%10;
           n= n/10;
    }
    return max;
}
int main()
{
    cout << heighestValueDigit(572);
    return 0;
}

