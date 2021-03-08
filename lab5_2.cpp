#include <stdio.h>
#include <stdbool.h>
int main()
{
	int maxline, line, max, col;
	bool direction = false, first = true, wait = false;
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
		wait = true;
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
		col = 0;
		while (col < max)
		{
			if (print[col] == '*')
			{
				if (first == true)
				{
					
				}
			}
		}
	}
	while (line < maxline);
	return 0;
}
