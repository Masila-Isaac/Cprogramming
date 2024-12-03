#include <stdio.h>

float area (float radius);
float sque(float m);

int main(int argc, char** argv)
{
    float r;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", area(r));

    float m;
    printf("Enter a number to square: ");
    scanf("%f", &m);
    printf("The square is %.2f\n", sque(m));

    return 0;
}

float area (float radius)
{
    return 3.142 * radius * radius;
}

float sque(float m)
{
    return m * m;
}
2