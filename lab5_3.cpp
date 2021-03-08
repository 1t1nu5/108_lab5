#include <stdio.h>
int main()
{
	int n, number = 2;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("1");
		return 0;
	}
	do
	{
		int i = number;
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
	printf("%d", number);

	return 0;
}
