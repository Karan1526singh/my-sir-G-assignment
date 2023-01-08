#include<iostream>
using namespace std;
class date
{
public :
    date(int day,int month,int year)
    {
       cout<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
    date a(24,04,2002);
}

