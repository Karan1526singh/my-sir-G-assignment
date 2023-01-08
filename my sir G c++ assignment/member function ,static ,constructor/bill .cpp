#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
private :
    int billid;
    int consume_unit;
    char name[20];
public :
    void get(int x,int y,char word[])
    {
        int billid=x;
        consume_unit=y;
        strcpy(name,word);
    }
    int calculatebill()
    {
        float unit;
        if(consume_unit<=100)
        {
             unit = 1.20 * consume_unit;
        }
        else if(consume_unit>100 &&consume_unit<=200)
        {
            unit = (100 * 1.20) + (consume_unit - 100) * 2;
        }
        else if (consume_unit > 200)
        {
            unit = (100 * 1.20) + (100 * 2) + (consume_unit - 200) * 3;
        }
        return unit;
    }
};
int main()
{
    Bill b;
    b.get(12,100,"karan");
    cout<<b.calculatebill();
}
