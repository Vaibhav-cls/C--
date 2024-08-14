#include<iostream.h>
using namespace std;
int main()
{
    int i,p,j,T,N,K,d,g[50],s[50],c,z;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N>>K;
        for(p=1;p<=N;p++)
        {
            g[p]=p;
        }
        for(j=1;j<=K;j++)
        {
            z=2,d=1,c=1;
            for(p=1;p<=N;p++)
            {
               
                s[p]=g[p];
            }
            for(p=1;p<=N;p++)
            {
                if(d<=N)
                {
                    g[p]=s[d];
                    d+=2;
                    c++;
                }
            }
            for(p=c;p<=N;p++)
            {
                g[p]=s[z];
                z+=2;
               
            }
        }
        for (p = 1; p <= N; p++)
        {
            cout << g[p] << " ";
        }
        cout<<endl;
    }
    return 0;
}