#include <stdio.h>

int main() {
    int i, j, n;

    // Set the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    // Loop to print each row
    for (i = n; i >= 1; i--) {
        // Print spaces for right alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
		}
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//n --raws 
//j --space 
//i -- range