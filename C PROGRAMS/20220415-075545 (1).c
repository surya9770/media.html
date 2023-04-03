#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    i=1;
    printf("Enter value of n=");
    scanf("%d",&n);
    /*loop to generate and and print natural number*/
    do
       {
         printf("\n%d",i);
        i++;
       }
    while(i<=n);
   
}