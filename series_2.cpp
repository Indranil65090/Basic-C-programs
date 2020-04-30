#include<stdio.h>
#include<math.h>
int main()
{
	int t,n;
	float y;
	printf("Enter the number of iterations the user want:");
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{
		y=2*pow(2.1782,-0.1*t)*sin(0.5*t);
		printf("y=%3f",y);
		printf("\n");
	}
	
}
