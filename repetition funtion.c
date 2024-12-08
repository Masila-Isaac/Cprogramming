#include <stdio.h> 
int FactR(int); 
int main() 
{ 
int i;
printf("enter the of i: " );
scanf("%d", &i);
 printf("Factorial of %d is %d\n", i, FactR(i)); 
return 0; 
} 
int FactR(int i) 
{ 
if(i <= 1) 
{ 
 return 1; 
} 
return i * FactR(i - 1); 
} 