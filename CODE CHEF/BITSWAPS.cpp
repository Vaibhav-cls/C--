#include<iostream.h>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int A[N],*p,*q;
        for(int i=0;i<N;i++)
            cin>>A[i];
        p=A;
        q=&A[N-1];
        for(int i=0;i<N;i++)
        {
            if(*p>*q && *p & *q!=0)
            {
                int temp=*p;
                *p=*q;
                *q=temp;
                p++;
                q--;
            }
        }   
        for(int i=0;i<N;i++)
        cout<<A[i]<<"  ";
    }
    return 0;
}