#include <bits/stdc++.h>

using namespace std;

string getPhoneNumber(string s) {
    string str="",buffer="";
    vector<string> store;
    int len = s.length(),i=0;
    while(i<=len){

        while(s[i]!=' '){
            buffer+=s[i];
            i++;
        }
        store.push_back(buffer);
        buffer="";
        i++;
    }
    char nums[] = {'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<=store.size();i++){
        if(store[i]=="one"){
            str+='1';
        }
        else if(store[i] == "two"){
            str+='2';
        }
        else if(store[i] == "three"){
            str+='3';
        }
        else if(store[i] == "four"){
            str+='4';
        }
        else if(store[i] == "five"){
            str+='5';
        }
        else if(store[i] == "six"){
            str+='6';
        }
        else if(store[i] == "seven"){
            str+='7';
        }
        else if(store[i] == "eight"){
            str+='8';
        }
        else if(store[i] == "nine"){
            str+='9';
        }
        else if(store[i] == "zero"){
            str+='0';
        }
    }
    cout<<str;
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = getPhoneNumber(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
