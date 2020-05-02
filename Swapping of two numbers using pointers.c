#include<stdio.h>
int main()
{
	int a,b;
	int *aa,*bb;
	/*storing the address of the two numbers*/
	aa=&a;
	bb=&b;
	/*entering the two numbers*/
	printf("Enter the two numbers:\n");
	scanf("%d %d",aa,bb);
	/*swapping of two numbers*/
	*aa=(*aa)+(*bb);
	*bb=(*aa)-(*bb);
	*aa=(*aa)-(*bb);
	/*printing the two numbers*/
	printf("The two numbers are:\n%d %d",*aa,*bb);
	
	return 0;
}
