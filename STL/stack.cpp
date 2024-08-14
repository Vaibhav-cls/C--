#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(90);
    s.push(44);
    s.push(12);
    s.push(69);
    s.push(445);
    s.push(112);
    cout<<"Top: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    s.empty()?cout<<"Empty"<<endl:cout<<"Non empty";
    return 0;
}