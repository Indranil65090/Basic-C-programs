/**
finding the largest number out of three numbers using pointer and function
*/
#include<stdio.h>
int great(int *,int *,int *,int *);
int main()
{
	int num1,num2,num3,num4;
	
	printf("Enter the 1st number:");
	scanf("%d",&num1);
	printf("Enter the 2nd number:");
	scanf("%d",&num2);
	printf("Enter the 3rd number:");
	scanf("%d",&num3);
	
	great(&num1,&num2,&num3,&num4);//passing the addresses of the variables 
	printf("The largest number is:%d",num4);
	
	return 0;
}
int great(int *a,int *b,int *c,int *large)
{
	if(*a>*b && *a>*c)
	*large=*a;
	
	else if(*b>*a && *b>*c)
	*large=*b;
	
	else
	*large=*c;
}
