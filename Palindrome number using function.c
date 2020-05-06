#include<stdio.h>
void palindrome(int);
int main()
{
	int n;
	printf("Enter the number from user:");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
void palindrome(int n)
{
	int result=0,c,a;
	c=n;
	while(n!=0)
	{
		a=n%10;
		result=result*10+a;
		n/=10;
	}
	if(result==c)
	{
		printf("The number %d is palindrome",c);
	}
	else
	{
		printf("The number %d is not palindrome",c);
	}
}
