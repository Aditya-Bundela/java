#include<stdio.h>
#include<conio.h>
void main()
{

    char ch;
    printf("enter digit");
    scanf("%c",&ch);

     while(ch<='1'&&ch<='z')
        printf("%c is ",ch);
    {
    if(ch>='a'&&ch<='z')
        printf("%c is alpha",ch);
    else
        printf("%c is not a alpha",ch);
}
}
