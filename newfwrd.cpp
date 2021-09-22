#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float x[10][10],u,h,p,term,sum=0.0;
	printf("Enter the number of data pairs:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of x[%d][0]: ",i);
		scanf("%f",&x[i][0]);
		printf("\nEnter the value of x[%d][1]: ",i);
		scanf("%f",&x[i][1]);
	}
	for(i=2;i<=n;i++)
	{
		for(j=0;j<n-i+1;j++)
		{
			x[j][i]=x[j+1][i-1]-x[j][i-1];
		}
	}
		printf("\nFORWARD DIFFERENCE TABLE IS:\n\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i+1;j++)
			{
				printf("%0.2f\t",x[i][j]);
			}
			printf("\n");	
		}
	printf("\nEnter the interpolating point:");
	scanf("%f",&p);
	h=(x[1][0]-x[0][0]);
	u=(p-x[0][0])/h;
	sum=x[0][1];
	term=1.0;
	for(j=2;j<=n;j++)
	{
		term=term*((u-(j-2))/(j-1));
		sum=sum+(term*x[0][j]);
	}
	printf("\n Indranil Dutta found that the interpolated value of y(%0.2f)=%0.5f",p,sum);
}
