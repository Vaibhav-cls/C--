#include<bits/stdc++.h>
using namespace std;

class Substrings{

    private:
        void solve(string str,string output, int index, vector<string> &ans){
            if(index>=str.length()){
                ans.push_back(output);
                return;
            }

            //excluded
            solve(str,output,index+1,ans);
            
            //included
            char ch = str[index];
            output.push_back(ch);
            solve(str,output,index+1,ans);
        }
    public:
        vector<string> subStr(string str){
            vector<string> ans;
            string output;
            int index=0;
            solve(str,output,index,ans);
            return ans;
        }
};
int main(){
    Substrings s1;
    string str;
    cin>>str;
    vector<string> subst = s1.subStr(str);
    sort(subst.begin(),subst.end());
    for(int i=0;i<subst.size();i++)
        cout<<subst[i]<<" ";
    return 0;
}