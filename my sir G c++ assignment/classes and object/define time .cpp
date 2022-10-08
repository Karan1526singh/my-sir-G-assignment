#include<iostream>
using namespace std;
class time
{
private :
    int hour;
    int min;
    int sec;
public :
    void set(int h,int m,int s)
    {
        hour =h;
        min =m;
        sec= s;
    }
    print()
    {
        cout<<"Time is "<<hour<<":"<<min<<":"<<sec;
    }
};
int main()
{
    time t;
    t.set(1,2,3);
    t.print();
}

