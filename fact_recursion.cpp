#include<iostream.h>
using namespace std;
int fac(int n);
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<"\nFactorial is: "<<fac(a);
    return 0;
}
 int fac(int n)
    {
        int fact=1;
        if(n==1)
        return 1;
        else
          return n*fac(n-1);
    }