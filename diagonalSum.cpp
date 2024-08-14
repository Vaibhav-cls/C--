#include <bits/stdc++.h>
using namespace std;

int diagonalSum(int n, int d, vector<vector<int>> mat)
{
    int i = 0, j = 0, m1, m2,nd;
    if (d < n){
        i = d;
        j = 0;
        nd=d;
    }
    else{
        i = d-1;
        nd = j = d - n + 1;
    }
    m1 = i, m2 = j;
    int sum = 0;
    for (int k = 0; k <= nd; k++){
        sum+=mat[m1][m2];
        m1--;
        m2++;
    }
    return sum;
}
int main()
{
    vector<vector<int>> mat;
    int n, d;
    cout << "start\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        mat.push_back(temp);
    }
    cin >> d;
    cout<<diagonalSum(n,d-1,mat);
}