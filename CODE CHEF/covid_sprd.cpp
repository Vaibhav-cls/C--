#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, d;
        long long int sum = 1;
        cin >> n >> d;
        
        for (int i = 1; i <= d; i++)
            if (i <= 10){
                sum *= 2;
                if (sum > n){
                    sum = n;
                    break;
                }
            }
            else{
                sum *= 3;
                if(sum > n){
                    sum = n;
                    break;
                }
            }
            cout << sum << endl;
    }
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int T,N,D,in;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        in=1;
        scanf("%d%d",&N,&D);
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
            printf("%d\n",in);
            else
            printf("%d\n",N);
        }
        else
        printf("%d\n",N);
    }
    return 0;
}*/