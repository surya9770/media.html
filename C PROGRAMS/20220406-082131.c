#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     int n;
     float a,b,y; 
     printf("\n Enter value of n (choice)=");
     scanf("%d",&n);
     printf("\n Enter value of a =");
     scanf("%f",&a);
     printf("\n Enter value of b =");
     scanf("%f",&b);
     switch(n)
    {
         case 1:
         y=a+b;
         break;
         case 2:
         y=a-b;
         break;
         case 3:
         if(a>b)
         {
         y=(a/b);
         }
         else 
         {
         y=(b/a);
         }
         break;
        default:
        y=a*b;
        break;
     }
    printf("\n value of y= %f",y);
    getch();
}