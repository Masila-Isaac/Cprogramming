#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*char miller[] = "masila";
	printf("My name is %s\n", miller);

// data types

	int number = 11276;
	double millerDouble = 18.5;
	float mister = 12.0;
	char grade = 'A';
	char names[] = "masila isaac";

	// printing functions


	printf("%d\n", number);
	printf("%.2f\n", millerDouble);
	printf("%c\n", grade);
	printf("%s\n", names);
	printf("%.1f\n", mister);
	printf("My favorite person is %d\n", 1331);

	//MATHS

	printf("%f\n", 15);
	printf("%d\n", 188);
	printf("%f\n", 2 / 3);
	printf("%f\n", pow(2, 3)); // first rised to the power  of the second
	printf("%f\n", sqrt (36)); // squereroot
	// floor is to round your figur down while ceil is used to round up the value

	//constants this are varriables which are unable to be changed

	/*const int num = 5;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/
/*
	//input lessons
	char levo[25 ];
	printf("Print masila is a very great? ");
	scanf("%99s", levo);
	printf("masila is a very great \%s\ .\n", levo);
	// fget is in three proposions
	//name of the variable .... how many character you want to input...you place (stdin)
*/
	// calculator
	float number1, number2;
	printf("give us the value of number 1: ");
	scanf("%f", &number1);
	printf("give us the vakue of number 2: ");
	scanf("%f", &number2);
	int output = number1 + number2;
	printf("%f", output);

	return 0;
}
