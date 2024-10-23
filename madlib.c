#include <stdio.h>
int main(int argc, char** argv)
{
	char color[20], person[20], name[20];
	printf("enter the color: ");
	scanf("%s", color);
	printf("enter the person: ");
	scanf("%s", person);
	printf("enter any one word message: ");
	scanf("%s", name);
	printf(" roses are %s \n", color);
	printf(" %s is cute \n", person);
	printf(" i love %s \n", name);
	return 0;
}