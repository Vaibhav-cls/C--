//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
int top = -1;
class Solution
{
private:
    void push(char a[], char data)
    {
        top++;
        a[top] = data;
        cout << "\npush  top = " << top << "\n";
    }
    void pop(char a[])
    {
        top--;
        cout << "\npop  top = " << top << "\n";
    }

public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        char stack[x.size()];
        if (x.size() % 2 == 1 && x.size() != 0)
            return false;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
                push(stack, x[i]);
            else
            {
                if (x[i] == ')' && x[top] != '(')
                    return false;
                else if (x[i] == '}' && x[top] != '{')
                    return false;
                else if (x[i] == ']' && x[top] != '[')
                    return false;
                pop(stack);
            }
        }
        if (top == -1)
            return true;
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends