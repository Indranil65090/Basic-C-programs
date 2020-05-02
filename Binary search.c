/**
Binary search is a technique to search a particular number when the numbers in the array are sorted. 
*/

#include<stdio.h>
int main()
{
	int i,n,num,found=0,a[30],beg,end,mid;
	printf("Enter the number of elements of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched-");
	scanf("%d",&num);
	
	beg=0;//beginning position
	end=n-1;//ending position
	
	while(beg<=end)
	{
		mid=(beg+end)/2;//creating tyhe middle position
		if(a[mid]==num)
		{
			found=1;
			printf("The number %d is found at %d",num,mid);
			break;			
		}
		if(a[mid]>num)//if the element at middle position is graeter than the number to be searched then changing the end position and again moving the loop 
		{
			end=mid-1;
		}
		else if(a[mid]<num)//if the element at middle position is smaller than the number to be searched then changing the beg position and again moving the loop 
		{
			beg=mid+1;
		}
	}
	
if(beg>end && found==0)//the condition for showing that such type of list of numbers cannot be possible
{
printf("The number %d doesnot exsist in the array",num);	
}
return 0;
}
