#include <iostream.h>

void solve(int a[], int n, int x)
{

    int sum = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= x)
        {
            c++;
            std::cout << c << "\n";
            return;
        }
        c++;
    }
    if (sum < x)
        std::cout << "-1\n";
}
void sort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int T, N, X, s;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        std::cin >> N >> X;
        int A[N];
        for (int j = 0; j < N; j++)
        {
            std::cin >> A[j];
        }
        sort(A, N);
        solve(A, N, X);
    }
    return 0;
}