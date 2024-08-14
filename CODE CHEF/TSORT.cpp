#include<iostream>
using namespace std;

void sort(int A[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}

int main()
{
    int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a,N);
        for (int i = 0; i < N; i++)
        {
            cout<< a[i]<<endl;
        }
    return 0;
}