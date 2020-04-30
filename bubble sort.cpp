/**
Bubble sort
*/

#include<stdio.h>
int main()
{
	int temp,j,i,n,a[50];
	
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])//check if the previous element is more than the current element if so then swap them.
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}
