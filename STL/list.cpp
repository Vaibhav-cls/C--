#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l;
    l.push_back(3);
    l.push_back(4);
    l.push_back(15);
    l.push_front(44);
    l.push_front(10);
    l.push_front(22);
    cout<<"size: "<<l.size()<<endl;
    l.pop_back();
    l.pop_front();
    cout<<"size: "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"size: "<<l.size()<<endl;
    for(int i:l)
        cout<<i<<" ";

    list <int> m(l);    // list l is copied
    for(int i:m)
        cout<<i<<" "; 
    list <int> k(7,55);   // there will be 5 elements in the list and it will be initialized as 55 in all the 7 positions
    for(int j:k)
        cout<<j<<" ";
    cout<<endl;
    l.empty()?cout<<"Empty"<<endl:cout<<"Non empty"<<endl;
    l.clear();
    l.empty()?cout<<"Empty"<<endl:cout<<"Non empty"<<endl;
    return 0;
}