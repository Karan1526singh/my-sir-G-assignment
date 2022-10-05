#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,23,4,45,5,6,6,7,7,7};
    int sum =0;
    for(int i=0;i<10;i++)
    {
        sum = sum + a[i];
    }
    cout<<"The sum of array is "<<sum;
}
