#include<iostream.h>
using namespace std;
bool isPrime(int n)
{
      if(n==1||n==0) 
      return false;
      for(int i=2; i<n; i++)
      {
        if(n%i==0) return false;
      }
      return true;
}
 
int main()
{
    int T,N,M,C;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N>>M;
        int S[N];
        S[0]=1;
        for(i=1;i<N;i++)
        {
            cin>>S[i];
        }
        for(i=1;i<M;i++)
        {
            if(isPrime(i))
            {
                for(int j=0;j<=N;j++)
                {
                    if(S[j]==i)
                    C++;
                }
            }
        }
        cout<<C<<endl;
    }
    return 0;
}