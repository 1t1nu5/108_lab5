#include <stdio.h>
int main()
{
	int n, line;
	scanf("%d", &n);
	do
	{
		if ((n%2 == 1 && line == (n-1)/2) || (n%2 == 0 && line == n/2 || line == n/2 - 1))
		{
			printf("*");
			for (int i = 0; i < n - 1; i++)
			{
				printf("-");
			}
			printf("*");
		}
		
		
	} 
	while (line < n);
	return 0;
}
