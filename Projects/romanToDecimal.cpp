#include<iostream>
using namespace std;

int return_val(char ch){            // FUNCTION TO FIND THE VALUE OF A ROMAN CHARACTER
    if(ch=='I')
        return 1;
    else if(ch=='V')
        return 5;
    else if(ch=='X')
        return 10;
    else if(ch=='L')
        return 50;
    else if(ch=='C')
        return 100;
    else if(ch=='D')
        return 500;
    else if(ch=='M')
        return 1000;
    return -1;
}
int find_greatest(string str)       // FUNCTION TO FIND THE GREATEST NUMBER IN THE STRING
{
    int max=return_val(str[0]);
    for(int i=1;i<str.size();i++){
        if(max<return_val(str[i]))
            max=return_val(str[i]);
    }

    for(int i=0;i<str.size();i++){
        if(return_val(str[i])==max)
            return i;
    }
    return 0;
}

int main()
{
    string s;
    int pos,right,sum;
    cout<<"Enter roman number: ";
    cin>>s;
    right=pos=find_greatest(s);
    sum=return_val(s[find_greatest(s)]);
    while(pos!=0){
        pos--;
        sum-=return_val(s[pos]);
    }
    while(right!=s.size()-1){
        right++;
        sum+=return_val(s[right]);
    }
    cout<<"Numerical value is: "<<sum;
    return 0;
}