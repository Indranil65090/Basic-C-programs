#include <stdio.h>
int main()
{
    int num,tNum,digit,cnt;
    int rem;
 	printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);
 	cnt=0;
    tNum=num;
 	while(tNum>0)
    {
        rem=tNum%10;
        if(rem==digit)
            cnt++;
        tNum/=10;
    }
 	printf("Total occurrence of digit is: %d in number: %d.",cnt,num);
    return 0;
}
