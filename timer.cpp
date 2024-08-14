#include<iostream>
#include<time.h>
using namespace std;
int timr(int a,int b=60,int c=60);
void delay(int no_of_seconds);
int main()
{
    int sec,hr,min;
    system("cls");
    std::cout<<"\nEnter in Seconds: ";
    cin>>hr>>min>>sec;
    timr(hr,60,60);
    return 0;
}
int timr(int a,int b,int c)
{
    int i,j,k;
    if(a==0||b==0||c==0)
    {
        for ( i = a ; i >=0 ; --i)
        {
            cout<<"\n\n\n\n\t\t\t"<<i;
            for(j=b;j>=0;--j)
            {
                cout<<":"<<j;
                for(k=c;k>=0;--k)
                {
                    delay(1);
                    cout<<":"<<k;
                }
            }
        }
    }
    
    return 0;
}
void delay(int no_of_seconds)
{
  int miliseconds=1000* no_of_seconds;
  clock_t start_time=clock();
  while(clock()<start_time+miliseconds);
}