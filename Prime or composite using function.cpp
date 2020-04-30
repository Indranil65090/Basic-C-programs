/**
checking that a given number is prime or composite using function
*/
#include<stdio.h>
int prime(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);//entering the number that needs to be checked whether prime or not
	
	prime(n);//calling the function
	
	return 0;
}

int prime(int a)//called part
{
	int flag=0,i;
	while(a!=0)
	{
		for(i=2;i<=a/2;i++)
		{
			if(a%2==0)
			{
				flag=1;
				break;
			}
		}
		if(a==1)
		{
			printf("%d is neither prime nor composite",a);
			break;
		}
		else
		{
			if(flag==0)//checking the temporary variable if it is same as initialized
			{
				printf("The number %d is prime",a);
				break;
			}
			else
			{
				printf("The number %d is not prime",a);	
				break;
			}	
		}
	}
}
