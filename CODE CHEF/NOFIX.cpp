#include<iostream.h>
using namespace std;

void check(int a[],int n)
{
    unsigned int d;
    for(int i=0;i<n;i++)
    {
        d=n;
        if(a[i]=i+1)
        {
            ++n;
            for(int j=n-2-i;j>=0;j--)
            {
                a[d]=a[d+1];
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<"  ";
    }
}

int main()
{
    unsigned int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
          cin>>A[i];
        check(A,N);  
    }
    return 0;
}