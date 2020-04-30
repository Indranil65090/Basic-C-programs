#include<stdio.h>
int swap_call_value(int,int);
int swap_call_reference(int *,int *);
int main()
{
	int a=1,b=2,c=3,d=4;
	printf("The values before swap by value:%d%d\n",a,b);
	swap_call_value(a,b);
	printf("The values after swap:%d%d\n",a,b);
	printf("The values before swap by reference:%d%d\n",c,d);
	swap_call_reference(&c,&d);
	printf("The values after swap:%d%d\n",c,d);
	return 0;
}
int swap_call_value(int num1,int num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("The values in the called function:%d%d\n",num1,num2);
}
int swap_call_reference(int *numm1,int *numm2)
{
	int temp=*numm1;
	*numm1=*numm2;
	*numm2=temp;
	printf("The values in the called function:%d%d\n",*numm1,*numm2);
}
