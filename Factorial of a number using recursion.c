#include<stdio.h>
int fact(int);
int main()
{
	int a,n;
	
	printf("Enter the number to find out the factorial of:");
	scanf("%d",&n);
	
	a=fact(n);
	
	printf("The value of factorial is:%d",a);
	return 0;
}
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
