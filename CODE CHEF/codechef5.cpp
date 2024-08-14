#include<iostream.h>
using namespace std;           //Sum of digits
int main()
{
    int n,m,p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        cin>>m;
        while(m!=0)
        {
            p= m%10;
            sum=sum + p;
            m=m/10;
        }
        cout<<sum;
    }
    return 0;
}