#include<stdio.h>
int main()
{
	int a,b;
	int *aa,*bb;
	aa=&a;
	bb=&b;
	
	printf("Enter the two numbers:\n");
	scanf("%d %d",aa,bb);
	
	*aa=(*aa)+(*bb);
	*bb=(*aa)-(*bb);
	*aa=(*aa)-(*bb);
	
	printf("The two numbers are:\n%d %d",*aa,*bb);
	
	return 0;
}
