#include <stdio.h>

int main ()
{
	int i, j;
	int rows;

	// Input number of rows
	printf("Enter number of rows: ");
	scanf("%d", &rows);

	// Loop through each row
	for (i = 1; i <= rows; i++)
	{
		// this to print spaces
		for (j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}


		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
 
 
 