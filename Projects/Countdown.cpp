#include<iostream>
#include<iomanip>
using namespace std;
class timer
{
    int h,m,s;
    int hrs=60,mins=60,sec=60;
    public:
    void getttime();                     //This function will get the time from user in hrs/mins/secs format
    
    void delay(int no_of_seconds)     //This function will work as a dynamic clock in the system and will 
    {                                 //pause system as per user requirement

        int miliseconds=1000 * no_of_seconds;
        clock_t start_time=clock();
        while(clock()<start_time+miliseconds);
    }
    void settime()                            //This function is entirly responsible for the countdown process
    {
        /*while (sec==0,mins==0)                   //This is the case when user will enter time in hr/0/0 format
        {
            for( h=hrs ; h>=0 ; --h)
            {
                for(m=mins;m>=0;--m)
                {
                    for(s=sec;s>=0;--s)
                    {
                        delay(1);
                        system("cls");
                        cout<<"\n\n\n\n\n\n\n\t\t\t";
                        cout<<h<<" hrs :"<<m<<" mins :"<<s<<" secs";
                    }
                }    
            }
        }*/

        for( h=hrs ; h>=0 ; --h)                    //This case is for all types of input process
        {                                       
            for(m=mins;m>=0;--m)                    //nesting loop so that minutes will decrease only after secs will execute
            {
                
                for(s=sec;s>=0;--s)
                {
                    delay(1);
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n\t\t\t";
                    cout<<h<<" hrs :"<<m<<" mins :"<<s<<" secs";      //printing the complete countdown process in this loop so that after every second the console area will be clear and the UI will look elegant 
                    /*if(s==0)            //this is the exception case when seconds will get 0 the default no. for seocnds will get reset to 59 & will decrese minutes by 1
                    s=59,--m;
                    else if(m==0)
                    m=59,--h;*/
                     
                    
                    
                }
                s=59;
            }
            
        }
        for(int y=0;y<10;y++)
        {
           system("cls");
           cout<<"\n\n\n\n\n\n\n\t\t\t\tALERT!!!";
           delay(1);
          
        }
    }
};
void timer::getttime()
{
    cout<<"\nEnter The time in Hr/Min/Sec format: ";
    cin>>hrs>>mins>>sec;
}
int main()
{
    system("cls");
    timer t1;
    t1.getttime();
    t1.settime();
    return 0;
}