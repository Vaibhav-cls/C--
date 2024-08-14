#include<iostream>
#include<iomanip>
using namespace std;
class timer
{
    int h,m,s;
    public:
    timer()
    {
        h=0;s=0;m=0;
    }
    void delay(int no_of_seconds)
    {

        int miliseconds=1000 * no_of_seconds;
        clock_t start_time=clock();
        while(clock()<start_time+miliseconds);
    }
    void settime()
    {
        for( h=0 ; h<60 ; h++)
        {
            system("cls");
            for(m=0;m<60;m++)
            {
                for(s=0;s<60;s++)
                {
                    delay(1);
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n\t\t\t";
                    cout<<h<<" hrs :"<<m<<" mins :"<<s<<" secs";
                }
            }
            
        }
    }
};
int main()
{
    system("cls");
    timer t1;
    
    t1.settime();
    return 0;
}