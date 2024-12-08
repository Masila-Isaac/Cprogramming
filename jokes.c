#include <stdio.h>

int main(int argc, char** argv)
{
    int x, y, m;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    m = 1; // Initialize m to 1 to use in multiplication
    for (y = 1; x > 1; x--)
    {
        m *= x; // Multiply m by x
    }
    
    printf("The value is %d\n", m);
    return 0;
}
