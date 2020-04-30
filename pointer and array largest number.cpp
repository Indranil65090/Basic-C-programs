#include<stdio.h>
int main()
{
	int i,n,a[50],pos,large=-1;
	int *pn,*pnum,*ppos,*plarge;
	pnum=a;
	plarge=&large;
	pn=&n;
	ppos=&pos;
	printf("Enter the number of elements of the array:");
	scanf("%d",pn);
	for(i=0;i<*pn;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",pnum+i);
	}
	for(i=0;i<*pn;i++)
	{
		if(*(pnum+i)>*plarge)
		{
			*plarge=*(pnum+i);
			*ppos=i;
		}
	}
	printf("The largest number of the array is:%d\n",*plarge);
	printf("The position of the largest value is:%d\n",*ppos);
	for(i=0;i<*pn;i++)
	{
		printf("a[%d]=",i);
		printf("%d",*(pnum+i));
		printf("\n");
	}
	return 0;
}
	
