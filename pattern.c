#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=r;c<=r;c--)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
}
