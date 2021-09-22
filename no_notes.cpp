#include<stdio.h>
int main() 
{
 	int a[8]={2000,500,200,100,50,20,10,5},m,temp,i; 
 	printf("Enter the amount:");
 	scanf("%d",&m);
    temp=m;
    for(i=0;i<8;i++)
    {
    	printf("\n%d notes is:%d",a[i],temp/a[i]);
    	temp=temp%a[i];
    }
return 0;    
}
