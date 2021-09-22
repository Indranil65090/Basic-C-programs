#include<stdio.h>
#include<math.h>
int main()
{
	float x[10],y[10],sum=0.0,k,p;
	int i,j,n;
	printf("Enter the no. of data pairs: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the value of x[%d]: ",i);
		scanf("%f",&x[i]);
		printf("\nEnter the value of y[%d]: ",i);
		scanf("%f",&y[i]);
	}
	printf("\nEnter interpolating point:");
	scanf("%f",&p);
	for(i=1;i<=n;i++)
	{
		k=1.0;
		for(j=0;j<=n;j++)
		{
			if(i!=j)
			{
				k*=((p-x[i])/(x[i]-y[i]));
			}
		}
		sum=sum+k*y[i];		
	}
	printf("\n Indranil Dutta found the interpolation value of y(%f)=%f\n",p,sum);
	return 0;
}
