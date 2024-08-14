#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> arrUnion(int arr1[], int arr2[], int n, int m)
{
  int l = 0, r = 0;
  vector<int>arr3;
  while (l < n && r < m)
  {
    if (arr1[l] < arr2[r])
    {
      if (arr3.empty() || arr3.back() != arr1[l])
      {
        arr3.push_back(arr1[l]);
      }
      l++;
    }
    else if (arr1[l] > arr2[r])
    {
      if (arr3.empty() || arr3.back() != arr2[r])
      {
        arr3.push_back(arr2[r]);
      }
      r++;
    }
    else
    {
      if (arr3.empty() || arr3.back() != arr1[l])
      {
        arr3.push_back(arr1[l]);
      }
      l++;
      r++;
    }
  }
  while (l < n)
  {
    if (arr3.empty() || arr3.back() != arr1[l])
    {
      arr3.push_back(arr1[l]);
    }
    l++;
  }

  while (r < m)
  {
    if (arr3.empty() || arr3.back() != arr2[r])
    {
      arr3.push_back(arr2[r]);
    }
    r++;
  }
  return arr3;
}
vector<int> arrIntersection(int arr1[], int arr2[], int n, int m){
  vector<int> arr3;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[arr1[i]]++;
  }
  for(int i=0;i<m;i++){
    mp[arr2[i]]++;
  }
  for(auto it:mp){
    if(it.second==2){
      arr3.push_back(it.first);
    }
  }
  return arr3;
}
int main()
{
  int n, m;
  cin >> n >> m;
  int *arr1 = new int[n];
  int *arr2 = new int[m];
  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  for (int i = 0; i < m; i++)
    cin >> arr2[i];
  
  // UNION
  vector<int> unionArray = arrUnion(arr1,arr2,n,m);
  cout<<"Union: ";
  for (int i = 0; i < unionArray.size(); i++)
    cout << unionArray[i] << " ";
  
  // INTERSECTION
  vector<int> intersectArray = arrIntersection(arr1,arr2,n,m);
  if(intersectArray.size()==0){
    cout<<"\nNo intersection elements";
  }
  else{
    cout<<"\nIntersection: ";
    for (int i = 0; i < intersectArray.size(); i++)
      cout << intersectArray[i] << " ";
  }
}