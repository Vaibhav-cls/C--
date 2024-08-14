#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int x,int mid){
    static int count=0;
    if(count == mid){
        st.push(x);
        return;
    }
    count++;
    int num = st.top();
    st.pop();
    solve(st,x,mid);
    st.push(num);
}

void pushAtMid(stack<int> &st,int x){
    int mid = st.size()/2;
    solve(st,x,mid);
}
int main()
{
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
    st.push(10);
    pushAtMid(st,9);
    cout<<st.size()<<endl;
   while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}