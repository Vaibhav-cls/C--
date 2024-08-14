#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q,k;
    cin>>n>>q;
    vector <vector<int>> arr;
    for(int i=0;i<n;i++){
        //cin>>k;
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }
    int x,y;
    for(int i=0;i<q;i++)
    {
        //cin>>x>>y;
        //cout<<arr[x][y]<<endl;
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
    }
    return 0;
}