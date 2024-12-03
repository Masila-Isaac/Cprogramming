functions 
in betwee this {} this is a local scope while this "int x:" then that is global scope

#include <stdio.h>
int x; // global scope 
// can be used anywhere in the code as long as the variable in not specified 
int fact (int n); // funtion scope 
// can be used the function with the same function name 
int main()
{
	int x; // in here is the local scope 
	// this means the variables inhere are used only in here and no where else 
	return 0;
}