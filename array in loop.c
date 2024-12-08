#include <stdio.h>

/* Initializing array elements using a loop */
int main()
{
    int i;
    int score[6];
    for (i = 0; i < 6; i++)
    {
        printf("\nEnter the score for subject %d: ", i + 1);
        scanf("%d", &score[i]);
    }

    printf("The scores are: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}
