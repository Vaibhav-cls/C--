#include <stdio.h>
#include <string.h>
int main()
{
	char S[100];
	int T, i, j, k;
	char temp;
	scanf("%d", &T);
	for (k = 0; k < T; k++)
	{
		scanf("%s", S);
		int n = strlen(S);
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (S[i] > S[j])
				{
					temp = S[i];
					S[i] = S[j];
					S[j] = temp;
				}
			}
		}
	    printf("%s\n", S);
	}
	return 0;
}