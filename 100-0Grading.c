#include <stdio.h>
// A PROGRAM USED TO RUN THE GRADES OF STUDENT IN AN EXAAMS WHOSE MAX IS 100
int main()
{
	int score;
	char Grade;

	printf("enter the students score: ");
	scanf("%d", &score);
	if	(score < 40)
		printf("Grade: E");
	else if (score <= 50)
		printf("Grade:D ");
	else if (score <= 60)
		printf("Grade: C");
	else if (score <= 70)
		printf("Grade: B");
	else
		printf("Grade : A");

	return 0;
}
