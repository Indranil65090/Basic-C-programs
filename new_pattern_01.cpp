#include<stdio.h>
int main()
{
	int n,r,i,j=1;
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(i=1;i<=r;i++)
		{
			printf("%d",j);
		}
		printf("\n");
		j=j+1;
	}
	
	return 0;
}
