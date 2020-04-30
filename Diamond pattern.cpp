/**
making a diamond pattern
*/
#include<stdio.h>
int main()
{
	int rows,i,j,space;
	
	printf("Enter the rows from user:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)//creating the rows for first half of the pattern or the upper half of the pattern
	{
		for(space=(rows-i);space>=1;space--)//creating the spaces on the left side for the first half of the pattern
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)//creating the loop for the stars in the first half of the pattern
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=(rows-1);i>=1;i--)//creating the rows of the lower half of the pattern
	{
		for(space=1;space<=(rows-i);space++)//creating the spaces on the left side for the lower half
		{
			printf(" ");
		}
		for(j=(2*i-1);j>=1;j--)//at last creating the stars for the lower half
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
