#include<iostream.h>
using namespace std;
int main()
{
    int a,b=1,c=0,st[10],i;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<"\nThe Binary number of "<<a<<" is: ";
    for(i=0;i<10;i++)
    {
        if(a%2!=0)
        st[i]=b;
        else
        st[i]=c;
        a=a/2;
    }
    for(i=9;i>=0;--i)
    {
        cout<<st[i];
    }
    return 0;
}