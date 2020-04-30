/**
creating a hollow diamond  
*/
#include<stdio.h>
int main()
{
	int i,j,n,k,r;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)//loop for entering the rows
	{
		for(i=2*r;i>=1;i--)
		{
			printf("*");
		}
		for(k=1;k<=(4*n-4*r);k++)
		{
			printf(" ");
		}
		for(j=2*r;j>=1;j--)
		{
			printf("*");	
		}
		printf("\n");
	}
	for(r=1;r<=n;r++)
	{
	for(i=1;i<=2*r;i++)
	{
	printf("*");
	}
	for(k=(4*n-4*r);k>=1;k--)
	{
	printf(" ");
	}
	for(j=1;j<=2*r;j++)
	{
	printf("*");	
	}
	printf("\n");
	}
	
	return 0;
}
	
		



