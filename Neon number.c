/**
neon number is the number whose square of the number and thereby adding the digits of the squared 
number gives the same number.
Example-9*9=81 and 8+1=9
*/
#include<stdio.h>
int main()
{
	int sum=0,num,num1,x;
	printf("Enter the number from user:");
	scanf("%d",&num);
	
	x=num*num;
	while(x!=0)
	{
	num1=x%10;
	sum=sum+num1;
	x=x/10;
	}
	
	if(num==sum)
	printf("The number is a neon number:%d",num);
	else
	printf("The number is not a neon number:%d",num);
	
	return 0;
}
