/**
 * C program to print X star pattern series
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    int count;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    count = 2 * n - 1;
    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
      }
     printf("\n");
    }
	return 0;
}
