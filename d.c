#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            b=r+c-1;
           if(b>5)

        b=b-5;
            printf("%d",b);
        }
        printf("\n");
    }
}
