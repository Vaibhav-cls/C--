#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(23);
    d.push_front(11);
    d.push_back(22);
    d.push_back(16);
    d.push_front(0);      //0 11 23 22 16
    // d.pop_back();
    // d.pop_front();
    d.erase(d.end(),d.end()+3);
    //d.clear();
    cout<<d.at(1)<<endl; // indexing from 0
    for(int i:d)
        cout<<i<<" ";
    cout<<endl<<d.size();
    cout<<endl;
    d.empty()?cout<<"Empty"<<endl:cout<<"Non empty"<<endl;
    d.clear();
    d.empty()?cout<<"Empty"<<endl:cout<<"Non empty"<<endl;
    return 0;
}