#include <stdio.h>
int main ()
{
	int i;
	int rows, j;
	scanf("%d", &rows);
	for (i = 1; i <= rows; i++)
		for (j = 1; j < rows; j++)
		{
			printf(" ");

		}
	for(j = 1; j <= (2 * i - 1); j++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
//m = raws
// i = collumn