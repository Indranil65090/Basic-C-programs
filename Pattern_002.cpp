#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//loop for the rows
	{
		for(j=n;j>=i;j--)//loop for showing the pattern 
		{
			printf("%d ",j);
		}
	printf("\n");
	}
	return 0;
}
