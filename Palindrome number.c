#include<stdio.h> 
int main()
{
	int n,c,result=0,a; 
	printf("Enter the number:");
	scanf("%d",&n);
        a=n;//putting the number in another variable
	while(n!=0)
	{
		c=n%10;
		result=c+result*10;
		n=n/10;
	}
	if(a==result)//checking if the original number is same as the result 
	{
		printf("The number %d is palindrome",a);
	}
	else
	{
		printf("The number %d is not palindrome",a); 
	}
	return 0;
}
