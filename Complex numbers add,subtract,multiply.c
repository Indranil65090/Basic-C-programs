#include<stdio.h>
int complexadd(int,int);
int complexsub(int,int);
int complexmul(int,int);
int main()
{
	int a,b,x,y,resum,imsum,resub,imsub,remul1st,remul2nd,m1,immul1st,immul2nd,m2;
	printf("First complex:");
	//enter the real and imaginary part of the first complex number
	scanf("%d%d",&a,&b);
	printf("Second complex:");
	//enter the real and imaginary part of the second complex number
	scanf("%d%d",&x,&y);
	resum=complexadd(a,x);
	imsum=complexadd(b,y);
	printf("The sum is:%d+i%d",resum,imsum);
	printf("\n");
	resub=complexsub(a,x);
	imsub=complexsub(b,y);
	printf("The subtractionis:%d+i%d",resub,imsub);
	printf("\n");
	remul1st=complexmul(a,x);
	remul2nd=complexmul(b,y);
	m1=complexsub(remul1st,remul2nd);
	immul1st=complexmul(a,y);
	immul2nd=complexmul(b,x);
	m2=complexadd(immul1st,immul2nd);
	printf("The multiplication is:%d+i%d",m1,m2);
	return 0;	
}
int complexadd(int m,int n)
{
	int c;
	c=m+n;
	return c;
}
int complexsub(int m,int n)
{
	int c;
	c=m-n;
	return c;
}
int complexmul(int m,int n)
{
	int c;
	c=m*n;
	return c;
}
