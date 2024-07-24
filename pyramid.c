#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=1;r<=5;++r)
    {
        for(b=r;b<=5;b++)
            printf(" ");
        for(c=1;c<=r;c++)
            {
                printf("*");
            }
    printf("\n");
    }
    for(r=4;r>=1;r--)
    {
        for(b=5;b>=r;b--)
            printf(" ");
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }


}
