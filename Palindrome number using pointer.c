#include<stdio.h> 
int main()
{
	int *a,n,c,result=0;
	a=&n;
	printf("Enter the number from user:");
	scanf("%d",a);
	c=*a;
	while(*a!=0)
	{
		int p=*a%10;
		result=result*10+p;
		*a=*a/10;
	}
	if(result==c)
	{
		printf("The number %d is palindrome",c);
	}
	else
	{
		printf("The number %d is not palindrome",c);
	}
	return 0;
}
