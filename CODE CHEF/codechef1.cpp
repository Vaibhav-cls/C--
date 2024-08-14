//PROGRAM TO INPUT THE WITHDRAW ANOUNT AND CURRENT BALANCE AND TO WITHDRAW THE AMOUNT IN MULTIPLES OF 5 

#include<iostream.h>
#include<iomanip.h>
using namespace std;
int main()
{
    int withdraw_amnt;
    float account_balance,remaining_bal,q;
    cout<<"Enter the amount(in USD) you want to withdraw and Account Balance(in USD): ";
    cin>>withdraw_amnt>>account_balance;
    if(withdraw_amnt % 5 == 0)
    {
        if(withdraw_amnt>account_balance)
        {
            cout<<"\nInsufficient Balance!";
        }
        else
        {
            remaining_bal=account_balance-withdraw_amnt-0.50;
            cout<<"\nSuccessful Transaction";
            cout.setf(ios::fixed);
            cout<<"\nRemaining Balance: "<<setprecision(2)<<remaining_bal;
        }
    }
    else
    cout<<"\nEnter the Withdrawal amount in multiples of 5";
    return 0;
}