#include <stdio.h>
#include <string.h>
int main()
{
	char nom[17], op[17], result[17], most = NULL;
	int digit;
	scanf("%s", nom);
	scanf("%s", op);
	scanf("%s", result);
	for (int i = 0; i < 17; i++)
	{
		if (nom[i] > 'A')
		{
			nom[i] -= 'A' + 10;
		}
		if (most < nom[i])
		{
			most = nom[i];
		}
	}
	for (int i = 0; i < 17; i++)
	{
		if (nom[i] > 'A')
		{
			nom[i] -= 'A' + 10;
		}
		if (most < op[i])
		{
			most = op[i];
		}
	}
	for (int i = 0; i < 17; i++)
	{
		if (nom[i] > 'A')
		{
			nom[i] -= 'A' + 10;
		}
		if (most < result[i])
		{
			most = result[i];
		}
	}
	
	return 0;
	//16
}
