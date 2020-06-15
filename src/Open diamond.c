/**
creating an open diamond
*/
#include<stdio.h>
int main()
{
	int i,j,k,n,r;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(r=n;r>=1;r--)//creating the rows for the first half of the pattern
	{
		for(i=r;i>=1;i--)//creating stars for the first half
		{
			printf("*");
		
		}
		for(k=1;k<=(2*n-2*r);k++)//creating spaces for the first half of the pattern
		{
			printf(" ");
		}
		for(j=r;j>=1;j--)//creating stars for the first half
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(r=1;r<=n;r++)//creating the rows for the second half of the pattern
	{
		for(i=1;i<=r;i++)//creating stars for the second half
		{
			printf("*");
		
		}
		for(k=(2*n-2*r);k>=1;k--)//creating spaces for the second half of the pattern
		{
			printf(" ");
		}
		for(j=1;j<=r;j++)//creating stars for the second half
		{
			printf("*");
		}
		printf("\n");
        }
    
    return 0;
}
