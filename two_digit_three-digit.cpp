#include<stdio.h>
int main()
{
	int count=0,num;
	
	printf("Enter the number from user:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		int c=num%10;
		count++;
		num/=10;
	}
	if(count==2)
	{
		printf("It is two digit number..!");
	}
	else if(count==3)
	{
		printf("It is a three digit number..!");
	}
	else
	{
		printf("It is some other number..!");
	}
	
	return 0;
}
