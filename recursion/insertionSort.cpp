#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    if(n<=0)
        return;
    insertionSort(arr,n-1);
    int nth = arr[n-1];
    int j = n-2;
    while (j >= 0 && arr[j] > nth){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = nth;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr= new int[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Sorted array: ";
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}