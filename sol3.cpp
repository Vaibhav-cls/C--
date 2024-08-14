#include<bits/stdc++.h>
using namespace std;
int getLength(const string& str) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}
string solve(string s1,string s2){
    int pointer=0;
    for(int i=0;i<getLength(s2);i++){
        if(s2[i] == 'R'){
            pointer++;
        }
        else  if(s2[i] == 'L'){
            pointer--;
        }
        else if(s2[i]=='T'){
            if(s1[pointer]!='9'){
                s1[pointer]++;
            }
        }
        else if(s2[i] == 'D'){
            if(s1[pointer] !='0'){
                s1[pointer]--;
            }
            continue;
        }
        else if(s2[i]=='S'){
            int index = s2[i+1] - '0';
            swap(s1[pointer],s1[index-1]);
            i++;
        }
    }
    return s1;
}
int main()
{
    string inputString="";
    string actionString="";
    cin>>inputString;
    cin>>actionString;
    cout<<solve(inputString,actionString);
    return 0;
}