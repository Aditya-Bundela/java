#include<stdio.h>
void main()
{
    int row,col,sp;
    for(row=1;row<=5;row++)
    {
        for(sp=1;sp<row;sp++)
        {
            printf(" ");
        }
        for(col=row;col<=5;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
