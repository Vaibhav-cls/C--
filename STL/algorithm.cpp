#include<iostream>
#include<algorithm>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(23);
    v.push_back(34);
    v.push_back(21);
    v.push_back(11);
    v.push_back(25);
    sort(v.begin(),v.end());
    cout<<"Finding 11 -> "<<binary_search(v.begin(),v.end(),11)<<endl;
    
}