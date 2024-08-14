#include<iostream.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a,b;
    int cnt=0;
    for(int i = 0 ; i < a ; i++)
    {
        int c;
        cin>>c;
        if(c % b == 0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
/*int main() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	cout << ans << "\n";
	return 0;
}*/