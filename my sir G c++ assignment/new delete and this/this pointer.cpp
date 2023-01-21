
#include<iostream>
using namespace std;
class base
{
private :
    int key;
public:
    void f1(int key)
    {
        this->key=key;
        cout<<this->key;
    }

};
class derived : public base
{
public:
    void f2()
    {
        cout<<"hello complier";
    }
};
int main()
{
    derived o;
    o.f1(4);
}
