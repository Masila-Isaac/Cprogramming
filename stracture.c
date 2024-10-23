# include <stdio.h>  //header file 
#define pi 3.142  // all this are preprocessor commands
int main()
{
	float radius, height, volume;
	int number;
	printf("input the radius of the cylinder; ");
	scanf("%f", &radius);
	printf("input the height of the cylinder; ");
	scanf("%f", &height);
	volume = radius * radius * height * pi;
	printf("volume =%f", volume);
	scanf("%d", number);
	if (number>20)
		printf("good");
	else
	{
		printf("bad");
	}

	return 0;
}

/*
header files 
variable declaration 
statements
function delacaritions 
const and define are the same despite of define being at the top of the program 
while const can be used anywhere 

*/