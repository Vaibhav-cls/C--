#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("One");
    q.push("Two");
    q.push("Three");
    q.push("Four");
    q.push("Five");
    q.push("Six");
    q.push("Seven");
    q.push("Eight");
    q.push("Nine");
    q.push("Ten");
    cout<<"size: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;
    q.pop();
    cout<<"size: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;

    // PRIORITY QUEUE
    priority_queue <int> maxi;  // Max heap
    priority_queue <int,vector<int> , greater<int>> mini;    //Min heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(6);
    maxi.push(12);
    maxi.push(2);
    cout<<"Size: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(23);
    mini.push(21);
    mini.push(18);
    mini.push(27);
    mini.push(11);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }

    return 0;
}