#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int,string> m;
    m.insert({1,"vaibhav"});
    m[2] = "ghanekar";
    m.insert({45,"Codes"});
    m[34] = "Nicely";
    cout<<"Before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Find 23 : "<<m.count(23)<<endl;
    cout<<"Find 34 : "<<m.count(34)<<endl;
    m.erase(34);
    cout<<"After erase: "<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    auto it = m.find(2);
    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}