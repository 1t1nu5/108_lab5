#include <stdio.h>
#include <stdbool.h>
int main()
{
	int n, number = 1, cnumber;
	bool check = false;
	scanf("%d", &n);
	do
	{
		if (number == 1)
		{
			n--;
			number++;
		}
		else if (number % 2 == 0)
		{
			if (check == false)
			{
				cnumber = number;
				check = true;
			}
			cnumber /= 2;
		}
		else if (number % 3 == 0)
		{
			if (check == false)
			{
				cnumber = number;
				check = true;
			}
			cnumber /= 3;
		}
		else if (number % 5 == 0)
		{
			if (check == false)
			{
				cnumber = number;
				check = true;
			}
			cnumber /= 5;
		}
		else if (cnumber % 2 == 0)
		{
			cnumber /= 2;
		}
		else if (cnumber % 3 == 0)
		{
			cnumber /= 3;
		}
		else if (cnumber % 5 == 0)
		{
			cnumber /= 5;
		}
		else if (cnumber == 1)
		{
			n--;
			number++;
			check = false;
		}
		else
		{
			number++;
			check = false;
		}
	}
	while (n > 0);
	printf("%d", number-1);
	return 0;
}
