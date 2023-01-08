#include<iostream>
using namespace std;
class time
{
private :
    int hour,minute,second;
public:
    friend  void operator>>(istream &,time &);
    friend bool operator==(time, time );
    friend void operator<<(ostream &,time &);
};
bool operator ==(time t1,time t2)
{
    if(t1.hour==t2.hour && t1.minute==t2.minute && t1.second==t2.second);
    {
        return 1;
    }
    return 0;
}
void operator >>(istream &in,time &t)
{
    in>>t.minute;
    in>>t.hour;
    in>>t.second;

}
void operator <<(ostream &os,time &t)
{
    os<<t.hour<<":";
    os<<t.minute<<":";
    os<<t.second;

}
int main()
{
    time c1,c2;
    cout<<"enter min,hour and second respectively";
    cin>>c1;
     cout<<c1;
     cout<<endl;
    cout<<"enter second input min,hour and second respectively";
    cin>>c2;
     cout<<c1;
    bool t=(c1==c2);
    if(t)
    {
        cout<<"equal time ";
    }
    else
        cout<<"not equal ";
}
