#include <bits/stdc++.h>
using namespace std;

vector<string> reverseString(string str){
    vector<string> words;
    string word = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word.push_back(str[i]);
        }
        else if(str[i]==' ' && str[i+1]==' '){
            continue;
        }
        else{
            words.push_back(word);
            word = "";
        }
    }
   words.push_back(word);
    return words;
}

int main() {
    string str;
    cout<<"enter string ";
    getline(cin,str);
    vector<string> ans = reverseString(str);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
        if(i!=0){
            cout<<" ";
        }
    }
    return 0;
}