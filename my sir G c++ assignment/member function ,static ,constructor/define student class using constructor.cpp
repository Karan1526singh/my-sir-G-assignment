#include <iostream>
#include<string.h>
using namespace std;
class student
{
private :
    int rollno;
    int mobno;
    char name[20];
public :
    student(int x,int y,char word[])
    {
        rollno=x;
        mobno=y;
        strcpy(name,word);
    }
    void display()
    {
        cout<<"roll number is "<<rollno<<endl<<"moblie number is "<<mobno;
        cout<<endl<<" name is "<<name;
    }
};
int main ()
{
    student s(3,7400,"karan");
    s.display();
}
