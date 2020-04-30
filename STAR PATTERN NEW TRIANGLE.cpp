/**
check out this pattern
*/
#include<stdio.h>
int main()
{
	int n1,n,r,i;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	n1=n;
	
	for(r=1;r<=n;r++)
	{
		if(r>1)
		{
			for(int space=1;space<=r-1;space++)
			{
				printf(" ");
			}
		}
		for(i=n1;i>=1;i--)
		{
			printf("*");
		}
		n1--;
		printf("\n");
	}
	
	return 0;
}
