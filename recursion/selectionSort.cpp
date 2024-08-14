#include<bits/stdc++.h>
using namespace std;
void findSmallest(int arr[],int n){
    int small=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[small])
            small = i;
    }
    swap(arr[0],arr[small]);
}
void selectionSort(int arr[],int size){
    int small,index;
    if(size==0 || size==1) 
        return;
    findSmallest(arr,size);
    selectionSort(arr+1,size-1);
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
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}