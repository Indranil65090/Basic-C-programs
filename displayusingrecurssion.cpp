#include<stdio.h>
void display(int a[],int i,int n)
{
	if(i>=n)
        return;
    else    
    	printf("%d",a[i]);
    display(a,i+1,n);
}
int main()
{
    int n,i;
    printf("Enter your array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are:");
    display(a,0,n);
    return 0;
}

