#include<stdio.h>

int main()
{
    int i,number;
    i=1;
    printf("Enter any number=");
    scanf("%d",&number);
    while(i<=10)
    {
    printf("\n %d", number*i);
    i++;
    }
}