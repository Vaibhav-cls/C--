#include <bits/stdc++.h>
using namespace std;
class Practice
{
public:
    // method to find that in how many ways can a person reach the Nth stair using 1,2 climbs only
    int countWays(long long nstairs)
    {
        if (nstairs < 0)
            return 0;
        if (nstairs == 0)
            return 1;
        return countWays(nstairs - 1) + countWays(nstairs - 2);
    }

    // method to check whether the given array is sorted or not
    bool isSorted(int arr[], int size)
    {
        if (size == 0 || size == 1)
            return true;
        if (arr[0] > arr[1])
            return false;
        isSorted(arr + 1, size - 1);
    }
    // method to find out that element is present in array ?
    bool isPresent(int arr[], int size, int key)
    {
        if (size == 0)
            return false;
        if (arr[0] == key)
        {
            return true;
        }
        isPresent(arr + 1, size - 1, key);
    }
    // method to print reverse of a string in reverse order
    void reverse(string &str, int i, int j)
    {
        if (i > j)
            return;
        swap(str[i], str[j]);
        return reverse(str, i + 1, j - 1);
    }
    // method to check whether a string is palindrome or not
    bool isPalindrome(string str, int i, int j)
    {
        if(i>j)
            return true;
        if(str[i]!=str[j])
            return false;
        else{
            i++;
            j--;
            return isPalindrome(str,i,j);
        }
    }
    // method to print subsequences and substrings of numbers
};
int main()
{
    Practice p1;
    string s = "abbccbba";
    cout << p1.countWays(3) << endl;
    int arr[] = {2, 4, 100, 8, 10, 12};
    (p1.isSorted(arr, 6)) ? cout << "True" << endl : cout << "False" << endl;
    (p1.isPresent(arr, 6, 99 + 1)) ? cout << "True" << endl : cout << "False" << endl;
    p1.reverse(s, 0, s.length() - 1);
    cout << s << endl;
    (p1.isPalindrome(s,0,s.length()-1)) ? cout << "True" << endl : cout << "False" << endl;
    return 0;
}