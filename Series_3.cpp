#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,a,b,n;
	float s;
	
	printf("Enter the value of y:");
	scanf("%d",&y);
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(x=-n;x<=n;x++)
	{
		s=1+sin(x)+(a*x+b*y)*(pow(2.178,x));
		printf("The result is:%.3f",s);
		printf("\n");
	}
	
	return 0;
}
