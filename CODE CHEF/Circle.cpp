#include<iostream.h>
using namespace std;
int main()
{
    int i,j,n,d=6;
    for(i=0;i<7;i++)
    {
       for(j=0;j<d;j++)
       {
            cout<<" ";
            if(j==d-1)
            cout<<"*\n";
       }
       cout<<"*";
       --d;
    }
    return 0;
}