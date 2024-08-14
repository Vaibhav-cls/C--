#include<iostream.h>
using namespace std;        //PROGRAM TO COUNT SPECIFIC OCCURANCEOF A DIGIT IN THE GIVEN NUMBER
int main()
{
    int num,i,j,n,count,temp,tnum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        count=0;
        cin>>num;
        tnum=num;
        while(tnum>0)
        {
            temp=tnum % 10;
            if(temp==4)
            {
                ++count;    
            }
            tnum=tnum/10;
        }
        cout<<count<<endl;
    }
    return 0;
}