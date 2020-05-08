#include<stdio.h>
int main()
{
	int n,sum=0,*p;
	p=&n;
	printf("Enter the number from user:");
	scanf("%d",p);
	int a=*p;
	while(*p>0)
	{
		int c=*p%10;
		int temp=1;
		for(int i=c;i>=1;i--)
		{
			temp=temp*i;
		}
		sum=sum+temp;
		*p=*p/10;
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
