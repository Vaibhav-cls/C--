#include <iostream.h>
using namespace std;
int main()
{
    char first, second, third, x, y;
    int i, T, j;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> first >> second >> third;
        cin >> x >> y;
        if (x == first || y == first)
            cout << first;
        else if (y == second || x == second)
            cout << second;
        else
            cout << third;
    }
    return 0;
}