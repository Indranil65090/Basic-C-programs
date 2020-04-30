#include<stdio.h>
int main()
{
	int rows,i,j,space;
	printf("Enter the rows:\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=(rows-i);space>=1;space--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=(rows-1);i>=1;i--)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(j=(2*i-1);j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
