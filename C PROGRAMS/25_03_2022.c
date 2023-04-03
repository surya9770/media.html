#include<stdio.h>

int main()
{
    int a,b;
    printf("\n Enter first number",a);
    scanf("%d",&a);
    printf("\n Enter second number",b);
    scanf("%d",&b);
    a+=b;
    printf("\n value of a=%d",a);
    a-=b;
    printf("\n value of a=%d",a);
    a*=b;
    printf("\n value of a=%d",a);
    a/=b;
    printf("\n value of a=%d",a);
    a%=b;
    printf("\n value of a=%d",a);
    return 0;
}