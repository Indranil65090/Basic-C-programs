#include<stdio.h>
int main()
{
	int rows,space,i,j;
	
	printf("Enter the rows:");
	scanf("%d",&rows);
	
	for(i=rows;i>=1;i--)
	{
		for(space=i;space<rows;space++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)                         
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

