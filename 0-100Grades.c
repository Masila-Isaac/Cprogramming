#include <stdio.h>
// A PROGRAM USED TO RUN THE GRADES OF STUDENT IN AN EXAAMS WHOSE MAX IS 100
int main()
{
	int score;
	char Grade;

	printf("enter the students score: ");
	scanf("%d", &score);
	if	(score >= 70)
		printf("Grade: A");
	else if (score >= 60)
		printf("Grade: B");
	else if (score >= 50)
		printf("Grade: C");
	else if (score >= 40);
		printf("Grade: D");
	else
		printf("Grade : E");

	return 0;
}
