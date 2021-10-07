#include <stdio.h>
int main()
{
    int i, j, diff, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        diff = N-1; // Initialize difference to total rows - 1
        value = i;  // Initialize value to the current row number
        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            value += diff; // Computes the next value to be printed
            diff--;        // Decrements the difference
        }

        printf("\n");
    }

    return 0;
}
