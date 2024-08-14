#include <iostream.h>
using namespace std;

int binsrch(int p[], int low, int high, int obj)
{
    if (high >= low)
    {
        int mid = (low + high) / 2, size = high;
        if (obj == p[mid])
            return mid;
        else if (p[mid] > obj)
        {
            low = 0, high = mid;
            return binsrch(p, low, high-1, obj);
        }
        else if (p[mid] < obj)
        {
            low = mid + 1, high = size;
            return binsrch(p, low, high, obj);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "\nEnter elements of an array: ";
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int key;
    cout << "\nEnter element to be searched: ";
    cin >> key;
    if (binsrch(A, 0, n - 1, key) == -1)
        cout << "\nELEMENT NOT FOUND!!";

    else
        cout << "\nELEMENT FOUND AT " << binsrch(A, 0, n - 1, key) + 1;
    return 0;
}