#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number from user:");
	scanf("%d",&n);
	int a=n;
	while(n>0)
	{
		int c=n%10;
		int temp=1;
		for(int i=c;i>=1;i--)
		{
			temp=temp*i;
		}
		sum=sum+temp;
		n=n/10;
	}
	if(sum==a)
	{
		printf("The number %d is Krishnamurthy",a);
	}
	else
	{
		printf("The number %d is not Krishnamurthy",a);
	}
	return 0;
}
