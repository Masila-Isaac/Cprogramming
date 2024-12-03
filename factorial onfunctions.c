#include <stdio.h>
int miller (int f);
int main(int argc, char** argv)
{
	int number, m;
	printf("enter a number ");
	scanf("%d", &number);
	m = miller(number); // funtion call
	printf("factorial = %d", m);
	return 0;
}
int miller (int f)
{
	int ans =1;
	while(f>1)
	{
		ans = ans*f;
		f--;
	return ans;
}
