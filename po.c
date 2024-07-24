#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=1;r<=5;r++)
   {
       for(b=5;b>=r;b--)
        printf(" ");
       for(c=1;c<=2*r-1;c++)
       {
           if(r==5||c==1||c==5)
        printf("*");
        else printf(" ");
   }
 printf("\n");
}
}
