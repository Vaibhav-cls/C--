#include <bits/stdc++.h>
using namespace std;
int  freq(int arr[],int size,int key);
int returnIndex(int key,int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            return i;
    }
    return 0;
}
int calcAns(int arr[],int size){
    vector <int> set;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[i-1])
            set.push_back(arr[i]);
    }
    int map[set.size()],sorted[set.size()];
    for(int i=0;i<set.size();i++){
        map[i] = freq(arr,size,set[i]);
        sorted[i]=map[i];
    }
    sort(sorted,sorted+set.size());
    for(int i=0;i<set.size();i++){
        int index = returnIndex(sorted[i],map,set.size());
       for(int j=0;j<sorted[i];j++)
       {
            cout << set[index]<<" ";
       }
    }
    return 0;
}
int  freq(int arr[],int size,int key){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            count++;
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    int arr[n],map[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    calcAns(arr,n);
    return 0;
}