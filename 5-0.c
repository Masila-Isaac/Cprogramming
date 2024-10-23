#include <stdio.h>
int main()
{
	int score;
	printf("enter the score 1-5: ");
	scanf("%d", &score);
	switch(score)
	{
	case 1:
		printf("poor");
		break;
	case 2:
		printf("below avarage");
		break;
	case 3:
		printf("avarage");
		break;
	case 4:
		printf("Good ");
		break;
	case 5:
		printf("Excellent");
		break;
	default:
		printf("invalid");

	}
	return 0;
	
	// there will be a ct next week 
}
/*{
	int score;
	printf("enter Score 1-5s: ");
	scanf("%d", &score);
	if (score>4)
		printf("excelent");
	else if(score>3)
		printf("good");
	else if(score>2)
		printf("average");
	else if(score>1)
		printf("bellow avarage");
	else
	{
		printf("poor");
	}

	return 0;
}
*/
// now the home work is to do the program going the opposite way S

