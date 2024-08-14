#include<iostream.h>
#include<algorithm>
using namespace std;

int main()
{
   long long int n,t;
   cin>>t;
   int turn=0;
   while(t--)
   {
       cin>>n;
       long long int A[n];
       for(int i=0;i<n;i++)
       cin>>A[i];
       sort(A,A+n);
       if(A[0]%2==0)
       cout<<"\nCHEFINA";
       else
       cout<<"\nCHEF";
   }
    return 0;
}