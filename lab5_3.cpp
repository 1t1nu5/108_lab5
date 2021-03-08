#include <stdio.h>
int main()
{
	int n, number = 1, i;
	scanf("%d", &n);
	do
	{
		i = number;
		while (i % 2 == 0)
		{
			i /= 2;
		}
		while (i % 3 == 0)
		{
			i /= 3;
		}
		while (i % 5 == 0)
		{
			i /= 5;
		}
		if (i == 1)
		{
			n--;
		}
		number++;
	}
	while (n > 0);
	printf("%d", number-1);

	return 0;
}
