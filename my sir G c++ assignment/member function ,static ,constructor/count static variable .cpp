#include<iostream>
using namespace std;
class static_count
{
private :
    static int k;
public :
    static void call()
    {
        k++;
    }
    static void show()
    {
        cout<<k<<endl;
    }
};
int static_count::k=0;
int main()
{
    static_count::call();
    static_count::show();

    static_count::call();
     static_count::show();

    static_count::call();
    static_count::show();
}

