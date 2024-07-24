#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=1;r<=5;r++)
    {
        for(b=r;b<=5;b++)
            printf(" ");
        for(c=1;c<=(r*2-1);c++)
        {
            if(r==5||c==1||c==((r*2)-1))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }

}
