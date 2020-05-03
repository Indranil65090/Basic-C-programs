#include<stdio.h>
int main()
{
	int i,j,n;
	char a='A';
	char m='A';
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)//the loop to enter the rows
	{
		for(j=1;j<=i;j++)// the loop to make the pattern
		{
			printf("%c",a);
		}
		for(int k=1;k<=(2*n-2*i);k++)// the loop to enter the spaces
		{
			printf(" ");
		}
		for(int s=1;s<=i;s++)// the loop to make the pattern from other side
		{
			printf("%c",a);
		}
		printf("\n");
		a++;
	}
	for(i=1;i<=n;i++)//the loop to enter the rows for the lower half
	{
		for(j=1;j<=i;j++)// the loop to make the pattern
		{
			printf("%c",m);
		}
		for(int k=1;k<=(2*n-2*i);k++)// the loop to enter the spaces
		{
			printf(" ");
		}
		for(int s=1;s<=i;s++)// the loop to make the pattern from other side
		{
			printf("%c",m);
		}	
		printf("\n");
		m++;
	}
	return 0;
}
