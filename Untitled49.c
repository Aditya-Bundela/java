#include<stdio.h>
void main()
{
    int num,n;
    printf("enter number");
    scanf("%d",&num);

    if(num%5==0&&num%11==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}
