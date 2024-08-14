#include <iostream>
using namespace std;
class atm
{
protected:
    string password;
    string username;
    string full_name;

private:
    int amnt;
    string name;

public:
    float check_balance();
    void get_details();
    void registerUser(string, string);
    float withdraw_amnt(atm, int);
    bool auth(atm, string, string);
    float deposit();
};
bool atm::auth(atm user, string username, string password)
{
   if (user.username == username && user.password == password){
       return true;
   }
   return false;
}
void atm::registerUser(string username, string password)
{
    bool does_exists = false;
    does_exists = auth(username, password);
}
void atm::get_details()
{
    // system("cls");
    cout << "\n\n\n\t\t\tEnter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "\n\t\t\tEnter your password:";
    getline(cin, password);
}
float atm::withdraw_amnt(atm A1, int amount)
{
    if (A1.amnt >= amount)
    {
        cout << "Done";
    }
    else
        cout << "Insufficiant balance";
}
int main()
{
    int ch;
    system("cls");
    cout << "\n\n\t\t\t\tWelcome to ATM Program";
    cout << "\n\t\t\tSelect the operation you want: ";
    cout << "\t\t\t\t";
    cout << "\n1.Withdraw\n2.Check Balance\n3.Donate Money to PM Cares Fund\n4.Change Password\n5.Deposit Money ";
    cin >> ch;
    atm g;
    g.get_details();
    switch (ch)
    {
    case 1:
        g.withdraw_amnt(g, 20);
        break;
        // case 2:
        // case 3:
        // case 4:
        // case 5:
        // case 6:
    }
    return 0;
}