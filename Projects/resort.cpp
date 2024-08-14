#include<iostream.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class resort
{
private:
    int rno,days;
    float charges;
    char name[30];
    float compute()
    {
        float amnt=days*charges;
        if(amnt>11000)
        return 1.02*amnt;
        else
        return amnt;
    }
public:
    void getinfo();
    void dispinfo();
};
void resort ::getinfo()
{
    cout<<"Enter the customer number: ";
    cin>>rno;
    cout<<"\nEnter per day charges: ";
    cin>>charges;
    cout<<"\nEnter Name: ";
    gets(name);
    cout<<"\nEnter number of days: ";
    cin>>days;
}
void resort ::dispinfo()
{
    cout<<"\n\nCustomer Details:\n";
    cout<<"\nId: "<<rno;
    cout<<"\nName: "<<name;
    cout<<"\nCharges: "<<charges;
    cout<<"\nNumber of days: "<<days;
    cout<<"\nTotal amount: "<<compute();
}
int main()
{
    resort r1;
    r1.getinfo();
    r1.dispinfo();
return 0;
}