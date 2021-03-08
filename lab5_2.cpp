#include <stdio.h>
#include <stdbool.h>
int main()
{
	int maxline, line, max;
	bool direction = false, first = true;
	scanf("%d", maxline);
	if (maxline % 2 == 0)
	{
		max = maxline-1;
		char print[max];
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
		max = maxline;
		char print[maxline];
		for (int i = 0; i < max; i++)
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
		while ()
	}
	while (line < maxline);
	return 0;
}
