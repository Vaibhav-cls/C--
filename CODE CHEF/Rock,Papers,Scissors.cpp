#include <iostream.h>
using namespace std;
int main()
{
    int N, T, i, j=1, K;
    char S[N],W;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> N;
        gets(S);
    }
    do
    {
        if(S[i]==S[j])
        j++;
        else if(S[i]!=0)
        {
            if(S[i]=='R'&&S[j]=='S'||S[i]=='P'&&S[j]=='R'||S[i]=='S'&&S[j]=='P')
            j++;
            else if(S[i]=='R'&&S[j]=='P'||S[i]=='P'&&S[j]=='S'||S[i]=='S'&&S[j]=='R')
            i++;
        }
    } while (i=0 && i<T);
    
    /*do
    {
        if(S[j]==S[K+1])
        {
            W=S[j];
            K++;
        }
        else if(S[j]=="R")
    }
    while(j=0 && j<N);
    return 0;
}
int W(int I, int n)
    {
        for(int m=1;m<n;m++)
        {
            if(S[I]==S[m])
            W(I,m);
            else if(S[I]!=S[m])
            {
                if(S[I]=="R"&&S[m]=="S"||S[I]=="P"&&S[m]=="R"||S[I]=="S"&&S[m]=="P")
                W(I,m);
                else if(S[I]=="R"&&S[m]=="P"||S[I]=="P"&&S[m]=="S"||S[I]=="S"&&S[m]=="R")
                W(I+1,m);
            }
        }
        cout<<S[I];
    }*/