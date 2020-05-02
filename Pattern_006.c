#include<stdio.h>
int main()
{
	int rows,j,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(rows=1;rows<=n;rows++)
	{
		for(j=rows;j>=1;j--)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}
	
	return 0;
}
