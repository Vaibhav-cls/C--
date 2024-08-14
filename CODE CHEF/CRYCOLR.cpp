#include<iostream.h>
int main()
{
    int T;
    std::cin>>T;
    while(T--)
    {
        int N;
        std::cin>>N;
        int a[3],b[3],c[3],i,j;
        for(i=1;i<=3;i++)
        {
            std::cin>>a[i]>>b[i]>>c[i];
        }
        if(a[1]==N && b[2]== N && c[3]== N)
        {
            std::cout<<"0\n";
            continue;
        }    
        for(int i=1;i<3;i++)
        {
            j=std::max((a[2]+a[3]+b[3]),(b[1]+c[1]+c[2]));
        }
        std::cout<<j<<"\n";
    }
    return 0;
}