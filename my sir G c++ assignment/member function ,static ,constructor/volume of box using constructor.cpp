#include <iostream>
using namespace std;
class box
{
private:
    int len,bre, heig;

public:
    box(int x, int y, int z)
    {
        len= x;
        bre= y;
        heig= z;
    }
    void display()
    {
        cout<<"volume of box is "<< len*bre*heig;
    }
};
int main()
{
    box b(4,6,7);
    b.display();
}
