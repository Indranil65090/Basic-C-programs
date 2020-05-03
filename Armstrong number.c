#include<stdio.h>
#include<math.h>
int main()
{
	int n,remainder,result=0,c;
	printf("Enter original number:");
	scanf("%d",&n);
		c=n;
		while(c!=0)
		{
			remainder=c%10;
			result+=pow(remainder,3);
			c/=10;
		}
		if(n==result)
		{
			printf("It is an armstrong number:%d",n);
		}
		else
		{
			printf("It is not an armstrong number:%d",n);
		}
	return 0;
}
