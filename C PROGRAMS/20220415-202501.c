#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter value to n =");
    scanf("%d",&n);
    /*loop to generat*/
    for(i=1; i<=n; i++)
    {
        if(i==5)
        {

            break;
        }
        printf("\n%d",i);
    }
}