#include<stdio.h>
int main()
{
	int i,r,space,n;
	char ch;
	printf("Enter the number of rows from user:");
	scanf("%d",&n);
	for(r=0;r<n;r++)//creating the rows
	{
	space=n-1;
	space=space-r;	
	for(;space>=1;space--)//creating spaces for the left side
	{
		printf(" ");
	}
	ch='A';
	for(i=1;i<=(2*r+1);i++)//creating the pattern 
  {
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
return 0;
}
