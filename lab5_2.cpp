#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
	int maxline, line, max, col;
	bool direction = false, wait = false, first;
	scanf("%d", &maxline);
	char print[maxline];
	if (maxline % 2 == 0)
	{
		max = maxline-1;
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
		first = true;
		while (col < max)
		{
			if (print[col] == '*' && col != 0 && direction == false)
			{
				if (first == true)
				{
					print[col-1] = '*';
					print[col] = '-';
					first = false;
				}
				else
				{
					print[col] = '-';
					print[col+1] = '*';
					break;
				}
			}
			else if (print[col] == '*' && direction == true)
			{
				if (first == true)
				{
					print[col] = '-';
					print[col+1] = '*';
					col++;
				}
				else
				{
					print[col-1] = '*';
					print[col] = '-';
					break;
				}
			}
			else
			{
				if (col == 0)
				{
					if (wait == true)
					{
						wait = false;
					}
					else
					{
						if (direction = false)
						{
							direction = true;
						}
					}
				}
			}
			col++;
		}
	}
	while (line < maxline);
	return 0;
}
