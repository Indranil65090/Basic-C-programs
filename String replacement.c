#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[80],ch,newch;
	
	printf("Enter the string:\n");
	gets(str);
	
	printf("Enter the character to be replaced:\n");
	scanf("%c",&ch);
	
	getchar();

	printf("Enter the number with which it is replaced:\n");
	scanf("%c",&newch);
	
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
			str[i]=newch;
		}
	}
	
	printf("The new string is replaced '%c' with '%c'=\n%s",ch,newch,str);
	
	return 0;
}
