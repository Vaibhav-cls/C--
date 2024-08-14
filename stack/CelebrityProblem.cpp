#include <bits/stdc++.h>
using namespace std;
class CelebrityProblem
{
private:
    bool knows(vector<vector<int>> arr, int a, int b)
    {
        if (arr[a][b] == 1)
            return true;
        return false;
    }

public:
    int solve(vector<vector<int>> arr, vector<int> candidates)
    {
        stack<int> st;
        for (int i = 0; i < candidates.size(); i++)
        {
            st.push(candidates[i]);
        }
        while (st.size() != 1)
        {

            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (knows(arr, a, b))
                st.push(b);
            else
                st.push(a);
            
        }
        //verifying potential celebrity
        int zeros=0;
        for(int i=0;i<candidates.size();i++){
            if(arr[st.top()][i] == 0)
                zeros++;
        }
        if(zeros !=candidates.size())
            return -1;
        int ones=0;
        for(int i=0;i<candidates.size();i++){
            if(arr[i][st.top()] == 1)
                ones++;
        }
        if(ones !=candidates.size()-1)
            return -1;
        return st.top();
    }
};
int main()
{
    vector<vector<int>> arr = {{0, 0, 1, 0}, {0, 0, 1, 0}, {0, 1, 0, 0}, {0, 0, 1, 0} };
    vector<int> candidates ={0,1,2};
    CelebrityProblem c1;
    cout<<c1.solve(arr,candidates);
    return 0;
}