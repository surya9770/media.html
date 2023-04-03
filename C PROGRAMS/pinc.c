#include<stdio.h>
void main()
{

    int n;
    n=1;
    printf("enter the period alphabet as a to f\n ");
    scanf("%d",&n);
    switch (n)
    {
       case 1:
       printf("period 1");
       printf("Deshkar Rao Adkane\n");
       printf("He teaches programming in C \n");
        break;
        case 2:
         printf("period 2\n");
        printf("Vandana madam\n");
        printf("She teaches digital technology\n");
        break;
        case 3:
         printf("period 3\n");
        printf("KPA sir\n");
        printf("He teaches environment(BAU)\n ");
        break;
        case 4:
         printf("period 4\n");
        printf("vekanteswar sir \n");
        printf("He teaches environment(sewage water) \n");
        break;
        case 5:
         printf("period 5\n");
        printf("munmun madam\n");
        printf("He teaches electronic workshop\n ");
        break;
        case 6:
         printf("period 62\n");
        printf("Deepak sir\n");
        printf("He teaches beem\n ");
        break;
        default:
        break;
    }
}