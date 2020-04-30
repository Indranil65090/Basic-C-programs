#include<stdio.h>
int main()
{
	int c,n,count=0;
	printf("Enter the number from user:");
	scanf("%d",&n);
	while(n>0)
	{
		c=n%2;
		n=n/2;
		if(c==1)
		{
			count++;
		}
	}
	if(count%2==0)
		{
			printf("This is an evil number");
		}
	else
		{
			printf("This is not an evil number");
		}
	return 0;
}
