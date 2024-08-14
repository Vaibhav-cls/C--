#include<iostream.h>
using namespace std;
int main()
{
    unsigned int T;
    cin>>T;
    while(T--)
    {
        int N;
        long int K;
        cin>>N>>K;
        unsigned int arr[N];
        unsigned int xyz[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=i+1;
            xyz[i]=0;
        }
        if(N>2)
        {
            K=K%(N-2);
        }
        long int c=0;
        while(c<K)
        {
            int x=0;
            for(int i=0;i<N;i=i+2)
            {
                xyz[x]=arr[i];
                x++;
            }
            for(int i=1;i<N;i=i+2)
            {
                xyz[i]=arr[i];
            }
            for(int i=0;i<N;i++)
            {
                arr[i]=xyz[i];
            }
            c++;
        }
        for(int i=0;i<N;i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}