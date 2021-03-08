#include <stdio.h>
#include <stdbool.h>
int main()
{
	int n, number = 1, cnumber;
	bool check = false;
	scanf("%d", &n);
	do
	{
		printf("%d\t%d\n", number, cnumber);
		if (number == 1)
		{
			n--;
			number++;
		}
		else if (number % 2 == 0 && check == false)
		{
			cnumber = number;
			check = true;
			cnumber /= 2;
		}
		else if (number % 3 == 0 && check == false)
		{
			cnumber = number;
			check = true;
			cnumber /= 3;
		}
		else if (number % 5 == 0 && check == false)
		{
			cnumber = number;
			check = true;
			cnumber /= 5;
		}
		else if (cnumber % 2 == 0 && check == true)
		{
			cnumber /= 2;
		}
		else if (cnumber % 3 == 0 && check == true)
		{
			cnumber /= 3;
		}
		else if (cnumber % 5 == 0 && check == true)
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
	printf("%d", number);

	return 0;
}
