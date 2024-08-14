#include<iostream.h>
using namespace std;
int main()                                         //SUM OF FIRST AND LAST DIGITS OF A NUMBER
{
    int a,b,i,m,d,p;
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>a;
        b= a % 10;
        for(i=a;i>=10;i=i/10);
        cout<<i+b;
    }
    return 0;
}