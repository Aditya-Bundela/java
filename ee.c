#include<stdio.h>
void main()
{
    int r,c,b;
    for(r=4;r>=1;r--)
    {
      for(b=5;b>=r;b--)
            printf(" ");

      for(c=1;c<=((2*r)-1);c++)
      {
          printf("*");
      }
      printf("\n");
    }
}
