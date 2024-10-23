#include <stdio.h>
int main()
{
	int score;
	printf("enter Score 1-5s: ");
	scanf("%d", &score);
	if (score<2)
		printf("poor");
	else if(score<3)
		printf("below avarage");
	else if(score<4)
		printf("average");
	else if(score<5)
		printf("good");
	else
	{
		printf("excelent");
	}

	return 0;
}

// now the home work is to do the program going the opposite way S