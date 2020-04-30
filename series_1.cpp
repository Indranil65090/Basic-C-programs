#include<stdio.h>
int main()
{
	int i,j,n,sum=0,c;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
		for(i=2,j=1;i<=n,j<=n-1;i++,j++)
		{
			sum=sum+(i*j);
		}
		c=1+sum;
		
	printf("The sum of the series is %d",c);
	return 0;
}
