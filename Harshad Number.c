/**
Harshad number in base 10 which is divisible by sum of it's digits.
Examples-1,2,3,4,5,6,7,8,9,10,12,18,20,21 etc.
*/
#include<stdio.h>
int main()
{
	int c,n,sum=0;
	printf("The number from user is:");
	scanf("%d",&n);//taking the input from user
	
	int num=n;
	
	while(num>0)
	{
		c=num%10;
		num/=10;
		sum+=c;//taking the sum of all the digits of the number given by user
	}
	
	if(n%sum==0)//checking the condition that number is completely divisible by the sum of the digits.
		{
			printf("%d is a Harshad number",n);	
		}
	else
		{
			printf("%d is not a Harshad number",n);
		}
		
	return 0;
}
