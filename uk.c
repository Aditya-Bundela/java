#include<stdio.h>
void main()
{
    int r,b,c;
    for(r=1;r<=5;++r)
    {
        for(c=1;c<=r;c++)
        {
           printf("%d",c);
        }
        printf("\n");
    }
        for(r=1;r<=5;++r)
    {
        for(b=5;b>=r;b--)
        printf(" ");
        for(c=r;c>=1;c--)
        {
           printf("%d",c);
        }
        printf("\n");
    }
}
