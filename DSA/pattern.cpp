#include<iostream.h>
using namespace std;
int main(){
int n,d=1,t;
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=n-i-1;j>0;j--)
        cout<<" ";
    for(int k=0;k<d;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    d+=2;
}
t=d-4;
for(int i=n-1;i>0;i--)
{
    for(int j=n-i;j>0;j--)
        cout<<" ";
    for(int k=0;k<t;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    t-=2;
}
return 0;
}