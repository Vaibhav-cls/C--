#include<iostream.h>
using namespace std;               //Find Remainder
int main()
{
    int i,p,a,b,remainder;
    cin>>p;
    for(i=0;i<p;i++)
    {
        a=0;
        b=0;
        cin>>a>>b;
        remainder= a % b;
        cout<<"\n"<<remainder;
    }
}