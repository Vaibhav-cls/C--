#include <iostream.h>
using namespace std;

void reverse(int n)
{
    int rev=0;
    while (n > 0)
    {
        int a=n%10;
        n /=10;
        rev=rev*10+a;
    }
    cout<<rev;
}

int main()
{
    int T, N, a;
    cin >> T;
    while (T--)
    {
        cin >> N;
        reverse(N);
    }
    return 0;
}