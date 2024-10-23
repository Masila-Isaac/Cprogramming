#include <stdio.h>
int main(int argc, char** argv)
{
	/*	int names[] = {6,7,3,5,7,8,9,7};
		printf("%d \n", names);
		printf("%d \n", names[3]);  */

	// fucntions
	// void means it will not return anything
	/*	sayhi("miller", 12);
		sayhi("miller", 14);
		sayhi("miller", 15);


		return 0;
	}
	void sayhi ( char name[], int age) {
		printf("say %s %d\n", name , age );
		printf("say hello \n");
	}*/
	int max (number1, number2)
	{
		int output;
		if	(number1 > number2)
		{
			output = number1;
		}
		else
		{
			output = number2;
		}
		return output;


	}
	int main(){
		printf("%d", max(40, 41));
		return 0;
	}
