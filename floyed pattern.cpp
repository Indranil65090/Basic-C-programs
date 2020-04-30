#include<stdio.h>
int main()
{
	int number=1,num,i,j;
	printf("Enter the  number of rows:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d",number);
			number++;
		}
		printf("\n");
	}
	return 0;
}
