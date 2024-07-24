#include<stdio.h>
void main()
{
    int r,c,b;

    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        for(b=1;b>=5;b++)
        {
            printf("%d",b);
        }
       printf("\n");
    }
}
