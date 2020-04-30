/**
A Duck number is a number which has zeroes present in it, 
but there should be no zero present in the beginning of the number.
For example-3210, 7056, 8430709 are all duck numbers whereas 08237, 04309 are not.
*/
#include<stdio.h>
int main()
{
	int num,flag=0;//taking a temporary variable flag
	printf("Enter the number from user:");
	scanf("%d",&num);
	while(num>0)
	{
		if(num%10==0)
		{
			flag=1;
			break;
		}
		num/=10;
	}
	if(flag==1)
	{
		printf("The number is a duck number");
	}
	else
	{
		printf("The number is not a duck number");
	}
return 0;
}
