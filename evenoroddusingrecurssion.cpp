#include <stdio.h>
void evenorodd(int a,int b);
int main()
{
    int c,d;
    printf("Enter lower limit: ");
    scanf("%d",&c);
    printf("Enter upper limit: ");
    scanf("%d",&d);
    printf("Even or odd numbers from %d to %d are: ",c,d);
    evenorodd(c,d); 
    return 0;
}
void evenorodd(int a,int b)
{
    if(a>b)
        return;
    printf("%d ",a);
    evenorodd(a+2,b);
}
