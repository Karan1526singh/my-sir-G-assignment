#include<iostream>
using namespace std;
class reverse
{
public :
        int revers(int n)
        {
            int ans=0;
            for(int i=n;i!=0;)
            {
                 ans=ans*10+i%10;
                 i=i/10;
            }
            return ans;
        }
};
int main()
{
    reverse r;
    int n;
    cout<<"please enter number :";
    cin>>n;
    cout<<r.revers(n);
}
