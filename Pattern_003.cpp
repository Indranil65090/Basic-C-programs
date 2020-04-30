#include<stdio.h>
int main()
{
	int i,j,k=0;
	for(i=7;i>=1;i--)
	{
		k=k+1;
		for(int space=2;space<=k;space++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
