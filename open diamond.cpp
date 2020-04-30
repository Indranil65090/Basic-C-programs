#include<stdio.h>
int main()
{
	int i,j,k,n,r;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)
	{
		for(i=r;i>=1;i--)
		{
			printf("*");
		
		}
		for(k=1;k<=(2*n-2*r);k++)
		{
			printf(" ");
		}
		for(j=r;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(r=1;r<=n;r++)
	{
		for(i=1;i<=r;i++)
		{
			printf("*");
		
		}
		for(k=(2*n-2*r);k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=r;j++)
		{
			printf("*");
		}
		printf("\n");
    }
    
    return 0;
}
