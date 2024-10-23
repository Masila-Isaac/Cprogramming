#include <stdio.h>
int main()
{
	int count = 0;
	printf("Helo data science \n");
	do
	{
		printf("%d. Hello data science \n", count);
		count ++;
	}
	while (count < 0);
	return 0;
}
