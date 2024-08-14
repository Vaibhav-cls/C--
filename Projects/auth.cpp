#include<iostream.h>
#include<string.h>
using namespace std;
class security
{
    private:
    int i,pass;
    public:
    char ch[20],name[20];
    void input_check()
    {
        cout<<"\nEnter Your Name: ";
        gets(ch);
        if(ch == "vaibhav" || ch == "Vaibhav")
        {
            cout<<"\nEnter Password: ";
            cin>>pass;
            if(pass == 2002)
            cout<<"\nWelcome "<<ch<<" to vaibhav's home!";
            else
            cout<<"\nIncorrect password!!";
        }
       /* else 
        cout<<"\nInvalid User!!";  */          
    }
};
int main()
{
    security s1;
    s1.input_check();
    return 0;
}