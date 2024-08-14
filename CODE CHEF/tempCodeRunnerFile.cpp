#include<iostream.h>
using namespace std;
int main()
{
    int T,N,D,in;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        in=1;
        cin>>N>>D;
        if(N>D)
        {
            for(int j=1;j<=D;j++)
            {
                if(j<11)
                in*=2;
                else
                in*=3;
            }
            if(in<N)
            cout<<in<<endl;
            else
            cout<<N<<endl;
        }
        else
        cout<<N;
    }
    return 0;
}