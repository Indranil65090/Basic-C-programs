#include<stdio.h>
void krishnamurthy(int n);
int main()
{
	int n;
	printf("Enter the number from user:");
	scanf("%d",&n);
	krishnamurthy(n);
	return 0;
}
void krishnamurthy(int n)
{
	int temp,a,sum=0;
	a=n;
	while(a>0)
	{
		int c=a%10;
		temp=1;
		for(int i=c;i>=1;i--)
		{
			temp=temp*i;
		}
		sum+=temp;
		a/=10;
	}
	if(sum==n)
	{
		printf("The number %d is a Krishnamurthy number",n);
	}
	else
	{
		printf("The number %d is not a Krishnamurthy number",n);
	}
}
