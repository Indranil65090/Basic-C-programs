/**
The selection sort sorts an array by repeatedly finding the minimum element 
(considering ascending order) from unsorted part(in the form of number of passes) and putting the samllest item at the beginning.
*/
#include<stdio.h>
int main()
{
	int n,temp,small,pos,i,j,a[50];
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements of the array");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n-1;i++)
	{
		small=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=small;
		a[pos]=temp;
	printf("The array after pass-%d",i+1);
	printf("\n");
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n");
	}
	
	printf("The sorted (ascending order) array is as shown below:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
