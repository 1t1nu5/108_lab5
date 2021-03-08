#include <stdio.h>
int main()
{
	int n, number = 0;
	scanf("%d", &n);
	do
	{
			number++;
		if (number == 1 || number % 2 == 0 || number % 3 == 0 || number % 5 == 0)
		{
			n--;
		}
	}
	while (n > 0);
	printf("%d", number);
	return 0;
}
