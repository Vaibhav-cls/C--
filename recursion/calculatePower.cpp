#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if(b==0)
        return 1;
    if(b%2==0)
        return (power(a,b/2)*power(a,b/2));
    else
        return a*(power(a,b/2)*power(a,b/2));
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b (a^b): ";
    cin>>a>>b;
    cout<<a<<" raise to power "<<b<<" = "<<power(a,b);
    return 0;
}