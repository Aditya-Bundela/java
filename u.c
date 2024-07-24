#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=5;r>=1;--r)
    {
        for(b=5;b>r;b--)
            printf(" ");
        for(c=1;c<=2*r-1;c++)
             if(c==1||c==2*r-1)
                 printf("*");
            else printf(" ");
            printf("\n");
    }
    for(r=2;r<=5;++r)
    {
        for(b=5;b>r;b--)
            printf(" ");
        for(c=1;c<=2*r-1;c++)
            if(c==1||c==2*r-1)
                printf("*");
            else printf(" ");
            printf("\n");
}
}
