#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char nom[17], op[17], result[17], most = NULL;
	int digit, nnom, nop, nresult;
	scanf("%s", nom);
	scanf("%s", op);
	scanf("%s", result);
	for (int i = 0; i < 17; i++)
	{
		if (nom[i] > 'A')
		{
			nom[i] -= 'A' + 10;
		}
		else
		{
			nom[i] -= 10;
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
		else
		{
			nom[i] -= 10;
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
		else
		{
			nom[i] -= 10;
		}
		if (most < result[i])
		{
			most = result[i];
		}
	}
	most--;
	for (int i = most; i < 36; i++)
	{
		nnom = 0;
		int j;
		for (j = 0; nom[j] != NULL; j++);
		j--;
		for (int k = 0; k < j; k++)
		{
			nnom += nom[j-k]*pow(most, k);
		}
		for (j = 0; op[j] != NULL; j++);
		j--;
		for (int k = 0; k < j; k++)
		{
			nop += op[j-k]*pow(most, k);
		}
		for (j = 0; result[j] != NULL; j++);
		j--;
		for (int k = 0; k < j; k++)
		{
			nresult += result[j-k]*pow(most, k);
		}
		if (nresult = nnom+nop)
		{
			printf("%d", most);
			return 0;
		}
	}
	printf("no");
	return 0;
}
