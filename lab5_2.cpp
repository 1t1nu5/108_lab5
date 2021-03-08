#include <stdio.h>
int main()
{
	int n, line = 0;
	scanf("%d", &n);
	do
	{
		if ((n%2 == 1 && line == (n+1)/2))
		{
			printf("*");
			for (int i = 0; i < n - 3; i++)
			{
				printf("-");
			}
			printf("*");
		}
		else if (n%2 == 0 && line == n/2 || line == n/2-1)
		{
			printf("*");
			for (int i = 0; i < n - 3; i++)
			{
				printf("-");
			}
			printf("*");
		}
		else if (line == 0 || line == n-1)
		{
			for (int i = 0; i < (n-1)/2; i++)
			{
				printf("-");
			}
			printf("*");
			for (int i = 0; i < (n-1)/2; i++)
			{
				printf("-");
			}
		}
		else
		{
			if (line <= n/2)
			{
				for (int i = 0; i < (n-1)/2-line; i++)
				{
					printf("-");
				}
				printf("*");
				for (int i = 0; i < line*2-1; i++)
				{
					printf("-");
				}
				printf("*");
				for (int i = 0; i < (n-1)/2-line; i++)
				{
					printf("-");
				}
			}
			
		}
		printf("\n");
		line++;
	} 
	while (line < n);
	return 0;
}
