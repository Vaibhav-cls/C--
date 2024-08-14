#include<iostream.h>
using namespace std;
void solve(string s, int n)
{
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    int one=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')
        one++;
    }
    if(one==0||(one==1 and s[n-1]=='1'))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s, s.length());
    }
    return 0;
}