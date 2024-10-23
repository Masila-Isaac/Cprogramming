#include <stdio.h>
int main ()
{
	int i;
	int m;
	for (m = 0; m < 5; m++)
	{
		{
			for (i = 5; i > m; i--)
				printf("* ");
		}
		printf("\n");


	}
	return 0;
}
//m = raws
// i = collumn
