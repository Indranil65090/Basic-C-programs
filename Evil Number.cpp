/**
An evil number is a non-negative number that has an even number of 1s in its binary expansion.
*/
#include<stdio.h>
int main()
{
	int c,n,count=0;
	printf("Enter the number from user:");
	scanf("%d",&n);//taking the input from user
	while(n>0)
	{
		c=n%2;
		n=n/2;
		if(c==1)//checking if the remainder is equal to 1s or not
		{
			count++;//counting the number of 1
		}
	}
	if(count%2==0)//checking if the number of 1s is even or not
		{
			printf("This is an evil number");
		}
	else
		{
			printf("This is not an evil number");
		}
	return 0;
}
