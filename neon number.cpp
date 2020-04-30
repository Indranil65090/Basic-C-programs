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
