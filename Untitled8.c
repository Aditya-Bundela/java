#include<stdio.h>
void main()
{
    int a,n;
    printf("enter number");
    scanf("%d",&n);

    if(n==0)
    {
        printf("number is zero");
    }
    else if(n>0)
    {
        printf("number is positive");
    }
    else if(n<0)
    {
        printf("number is negative");
    }
}
