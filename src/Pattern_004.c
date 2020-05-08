#include<stdio.h>
int main()
{
	int r,i,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(r=n;r>=1;r--)
	{
		char ch ='A';
		for(i=1;i<=r;i++)
		{
			printf("%c",ch);
			ch=ch+1;
		}
		for(int space=1;space<=(2*n-2*r);space++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
