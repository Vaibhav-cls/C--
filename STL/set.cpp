#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> st;
    st.insert(12);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(11);
    st.insert(12);
    st.insert(1);
    st.insert(3);
    for(auto i:st){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it = st.begin();
    it++;
    it++;
    st.erase(it);
    for(auto i:st){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"5 is present or not: "<<st.count(11)<<endl;
    set<int> ::iterator itr = st.find(11);
    cout<<&itr<<endl;
    for(auto it = itr;it!=st.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}