#include<stdio.h>
void TOH(int,char,char,char);
int main()
{
	int n;
	printf("Enter the number of disks:");
	scanf("%d",&n);
	TOH(n,'A','B','C');
	return 0;
}
void TOH(int n,char source,char destination,char spare)
{
	if(n==1)
	{
		printf("\nMove disk from %c to %c",source,destination);
	}
	else
	{
		TOH(n-1,source,spare,destination);
		TOH(1,source,destination,spare);
		TOH(n-1,spare,destination,source);
	}
}
