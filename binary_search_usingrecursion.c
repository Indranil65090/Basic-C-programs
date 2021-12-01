# include<stdio.h>
int binarysearch(int *ar ,int l,int r,int x)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ar[mid]==x)
            return mid;
        else if (ar[mid]>x)
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int  main (void)
{
    int ar[]={2,3,4,10,40};
    int x=4;
    int n =sizeof(ar)/sizeof(ar[0]);
    int result=binarysearch(ar,0,n-1,x);
    (result==-1)?printf("%d is not present in array",x):printf("%d is present at index:%d",x,result);
    return 0;
}
