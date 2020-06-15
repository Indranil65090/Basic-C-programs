/**
half diamond pattern
*/
#include<stdio.h>
int main()
{
	int i,n,r;
	
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(i=1;i<=r;i++)
		{
			printf("*");
		}
		printf("\n");	
	}
	
	for(r=(n-1);r>=1;r--)
	{
		for(i=r;i>=1;i--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
