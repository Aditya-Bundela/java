#include<stdio.h>
 void main()
 {
     int a=1,s=2,m=3,d=4,r,c,b,n;
     printf("OPTIONS ");
     printf("\1.Addition \2.Sub \3.Mul \4.Divi");
     scanf("%d",&n);

     switch(a,s,m,d)
     {
     case 1:
        {
         r=c+b;
         printf("%d",r);
         break;
        }
     case 2:
        {
            r=c-b;
            printf("%d",r);
            break;
        }
     case 3:
        {
            r=c*b;
            printf("%d",r);
            break;
        }
     }
 }

