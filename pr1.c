#include<stdio.h>
void main()
{
    int r,c,b=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",(b++)%2);
        }
    printf("\n");
}
}
