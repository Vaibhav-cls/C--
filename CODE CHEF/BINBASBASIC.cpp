/*  PROGRAM TO CHECKK WHETHER THE ENTERED BINARY STRING IS A PALINDROME OR NOT*/

#include<iostream.h>
using namespace std;

void solve(string a,int n,int k)
{
    int p=0;
    int r;
    r=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //cout<<a[p]<<" "<<a[++p]<<" "<<a[r]<<" "<<a[--r];
   /* while(p<=r)
    {
        if(a[p++]!=a[r--])
            k--;
    }
    if(k>=0)
    cout<<"YES\n";
    else
    cout<<"NO\n";*/
}

int main()
{
    int T,N,K;     //N->length of string   
    cin>>T;       //K->no. of operation
    int p;
    int r;
    while(T--)
    {
        cin>>N>>K;
        r=N-1;
        p=0;
        string S;
        for(int i=0;i<N;i++)
        {
            cin>>S[i];
        }
        //solve(S,N,K);
        while(p<=r)
       {
        if(S[p++]!=S[r--])
            K--;
       }
       if(K>=0)
       cout<<"YES\n";
       else
       cout<<"NO\n";
       }

    return 0;
}