#include<stdio.h>
int main()
{
	int a[50],n,temp,i,j,min=-1;
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:\n");
	for(i=1;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	//first initializing the first element of the array as -1
	a[0]=min;
	for(i=1;i<=n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	printf("the elements after sorting are:\n");
	for(i=1;i<=n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);	
	}
	
	return 0;
}
