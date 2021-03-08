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
		if (most < nom[i])
		{
			most = nom[i];
		}
	}
	return 0;
	//16
}
