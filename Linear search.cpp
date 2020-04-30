#include<stdio.h>
int main()
{
	int i,n,num,pos=0,found=0,a[30];
	printf("Enter the number of elements of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched-");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			found=1;
			pos=i;
			printf("The number %d is found in the array at position %d",num,pos);
			break;
		}
	}
	if(found==0)
	{
		printf("The number doesnot exsist in the array");
	}
	return 0;
}
