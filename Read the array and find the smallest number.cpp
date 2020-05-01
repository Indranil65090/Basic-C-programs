#include<stdio.h>
void read_array(int a[],int p);
int small_array(int a[],int p);
int main()
{
	int array[30],n,m;
	printf("Enter the number of elements of array:");
	scanf("%d",&n);
	read_array(array,n);
	m=small_array(array,n);
	printf("The smallest number in the arrayis:%d",m);
	return 0;
}
void read_array(int a[30],int p)
{
	int i;
	for(i=0;i<p;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
int small_array(int a[30],int p)
{
	int i,small;
	for(i=0;i<p;i++)
	{
		if(a[i]<small)
		small=a[i];	
	}
	return small;	
}
