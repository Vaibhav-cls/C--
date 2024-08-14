#include<stdio.h>
#include<string.h>

int main()
{
    int T,x,X,c,d,n;
    char S[14];
    scanf("%d",&T);
    while(T--)
    {
        c=0,n=0;
        scanf("%d",&x);
        X=x;
        for(int i=0;i<=14;i++)
            scanf("%c",&S[i]);
        for(int i=0;i<=14;i++)
        {
            if(S[i]=='C')
               c+=2;
            else if(S[i]=='N')
               n+=2;
            else if(S[i]=='D')
            {
                c++;
                n++;
            }      
        }
        if(c>n)
            printf("%d\n",X*60);
        
        else if(c<n)
            printf("%d\n",X*40);
        else if(c==n)
            printf("%d\n",X*55);    
    }
    return 0;
}