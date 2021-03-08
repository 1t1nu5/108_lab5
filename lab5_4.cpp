#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char nom[17] = {}, op[17] = {}, result[17] = {}, most = NULL;
	int digit, nnom, nop, nresult;
	scanf("%s", nom);
	scanf("%s", op);
	scanf("%s", result);
	for (int i = 0; i < 17; i++)
	{
		if (nom[i] == NULL)
		{
			break;
		}
		else if (nom[i] >= 'A')
		{
			nom[i] += 'A' - 120;
		}
		else
		{
			nom[i] -= '0';
		}
		if (most < nom[i])
		{
			most = nom[i];
		}
	}
	for (int i = 0; i < 17; i++)
	{
		if (op[i] == NULL)
		{
			break;
		}
		else if (op[i] >= 'A')
		{
			op[i] -= 'A' - 120;
		}
		else
		{
			op[i] -= '0';
		}
		if (most < op[i])
		{
			most = op[i];
		}
	}
	for (int i = 0; i < 17; i++)
	{
		if (result[i] == NULL)
		{
			break;
		}
		else if (result[i] >= 'A')
		{
			result[i] -= 'A' - 120;
		}
		else
		{
			result[i] -= '0';
		}
		if (most < result[i])
		{
			most = result[i];
		}
	}
	for (int i = 0; i < 16; i++)
	{
		printf("%d\n", nom[i]);
	}
	printf("\n\n%d\n", most);
	for (int i = most; i < 36; i++)
	{
		nnom = 0;
		nop = 0;
		nresult = 0;
		int j;
		for (j = 0; nom[j+1] != NULL; j++);
		for (int k = 0; k <= j; k++)
		{
			nnom += nom[j-k]*pow(i, k);
		}
		for (j = 0; op[j+1] != NULL; j++);
		for (int k = 0; k <= j; k++)
		{
			nop += op[j-k]*pow(i, k);
		}
		for (j = 0; result[j+1] != NULL; j++);
		for (int k = 0; k <= j; k++)
		{
			nresult += result[j-k]*pow(i, k);
		}
		printf("\t%d\t%d\t%d\t%d\n", i, nnom, nop, nresult);
	}
	printf("no");
	return 0;
}
