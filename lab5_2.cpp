#include <stdio.h>
#include <stdbool.h>
int main()
{
	int maxline, line;
	bool direction = false, reuse = false;;
	scanf("%d", maxline);
	reuse:
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
	if (reuse == true)
	{
		goto goback;
	}
	do
	{
		if (line == 0 || line == maxline-1)
		{
			goto reuse;
			goback:
				
		}
	}
	while (line < maxline);
	return 0;
}
