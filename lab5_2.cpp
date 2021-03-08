#include <stdio.h>
#include <stdbool.h>
int main()
{
	int maxline, line, direction = false;
	scanf("%d", maxline);
	if (maxline % 2 == 0)
	{
		char print[maxline-1];
		for (int i = 0; i < maxline-1; i++)
		{
			if (i = maxline/2-1)
			{
				print[i] = '*';
			}
			else
			{
				print[i] = '-';
			}
		}
	}
	else
	{
		char print[maxline];
		for (int i = 0; i < maxline-1; i++)
		{
			if (i = maxline/2)
			{
				print[i] = '*';
			}
			else
			{
				print[i] = '-';
			}
		}
	}
	do
	{
		
	}
	while (line < maxline);
	return 0;
}
