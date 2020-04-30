#include<stdio.h>
int main()
{
	int i,j,rows;
	char alphabet='A';
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",alphabet);
		}
		++alphabet;
		printf("\n");
	}
	return 0;
}
