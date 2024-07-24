#include<stdio.h>
void main()
{
    int a,b;
    printf("enter age");
    scanf("%d",&a);

    if(a>=1&&a<=5)
    {
        printf("INFANT");
    }
     else if(a>=13&&a<=19)
    {
        printf("TEENAGER");
    }
     else if(a>60)
    {
        printf("SENIOR CITIZEN");

    }
    else printf("OTHERS");
}
