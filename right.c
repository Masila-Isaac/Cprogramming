#include <stdio.h>

int main() {
    int i, j, n;

    // Set the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    // Loop to print each row
    for (i = 1; i <= n; i++) {
        // Print spaces for right alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars for the triangle
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
