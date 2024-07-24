#include<stdio.h>
void main()
{
    int n,digit,sum=0,reverse=0,no_digit=0;
    printf("enter number");
    scanf("%d",&n);

    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        sum=sum+digit;
        reverse=reverse*10+digit;
        no_digit++;
    }
    printf("sum of digit : %d\n",sum);
    printf("no of digit : %d\n",no_digit);
    printf("reverse of digit :%d\n",reverse);
}
