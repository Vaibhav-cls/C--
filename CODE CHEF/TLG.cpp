#include<iostream.h>
using namespace std;
int main()
{
    int N,S[1000],T[1000],M[1000],store;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>S[i]>>T[i];
    }
    for(int i=0;i<N;i++)
    {
        M[i]=S[i]-T[i];
    }
    int val=M[0];
    for(int i=0;i<N;i++)
    {
        if(M[i]>val)
        {
             val=M[i];
             store=i;
        }
    }
    cout<<store;
    return 0;
}