#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int s,int e){
    int p=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=p)
            count++;
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]); //12 11 7 5 4 3 1
    int i=s,j=e;
    while(i<pivotIndex && j> pivotIndex){
        while(arr[i] <= p)
            i++; 
        while(arr[j] > p)
            j--;
        if(i<pivotIndex && j> pivotIndex)
            swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e)
        return;
    int p = pivot(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    quickSort(arr,0,size-1);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}