#include <stdio.h>

int main(int argc, char** argv)
{
    int i;
	printf("please enter the value of i: ");
	scanf("%d",&i); // Initialize i with a starting value
    while (i > 0)
    {
        printf("masila is the, %d\n", i);
        i--; // Decrement i
    }
    return 0;
}
