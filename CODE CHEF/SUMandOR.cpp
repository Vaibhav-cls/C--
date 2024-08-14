#include<iostream.h>
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        std::cout << binaryNum[j];
    }
}


int main()
{
    int T,S,X,N;
    while(T--)
    {
        std::cin>>X>>S;
        std::cout<<(X|0);
        
    }
    return 0;
}