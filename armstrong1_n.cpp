#include <stdio.h>
int main()
{
    int number, temp, d1, d2, d3, n;
    printf("Print all Armstrong numbers between 1 and n:");
    scanf("%d",&n);
    number = 1;
    while (number <= n)
    {
        d1 = number - ((number / 10) * 10);
        d2 = (number / 10) - ((number / 100) * 10);
        d3 = (number / 100) - ((number / 1000) * 10);
        temp = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);
        if (temp == number)
        {
            printf("\n Armstrong no is:%d", temp);
        }
        number++;
    }
    return 0;
}
