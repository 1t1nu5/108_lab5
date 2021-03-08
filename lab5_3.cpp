#include <stdio.h>
int main()
{
	int n, number = 1;
	scanf("%d", &n);
	do
	{
		if (number == 1)
		{
			n--;
			number++;
		}
		else
		if (number % 2 == 0)
		{
			number /= 2;
		}
	}
	while (n > 0);
	printf("%d", number);
	return 0;
}
