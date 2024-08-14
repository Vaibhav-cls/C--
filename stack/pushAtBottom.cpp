#include<bits/stdc++.h>
using namespace std;
void pushAtBottom(stack<int> &mystack, int x){
    if(mystack.empty()){
        mystack.push(x);
        return;
    }
    int num = mystack.top();
    mystack.pop();
    pushAtBottom(mystack,x);
    mystack.push(num);
}
int main()
{
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
    pushAtBottom(st,9);
    cout<<st.size()<<endl;
   while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}