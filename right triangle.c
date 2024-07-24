#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=1;r<=5;++r)
    {
        for(b=1;b<=r;b++)
            printf(" ");

        for(c=r;c<=5;c++)
        {
            if(r==1||r==5||c==5||c==r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
