//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findMaxContagiousSubarraySum(int arr[], int n){
    int sum=0,maxi =arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi = max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< findMaxContagiousSubarraySum(arr,n);
    return 0;
}