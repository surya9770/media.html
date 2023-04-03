//write a program to print 3*3 matrix
//page no 05 

#include<stdio.h>
int main()
{
    int a [3][3],i,j;
    for(i=0;i<3;j++)
    {
        for (j=0 ; j < 3; j++)
        {
            printf("Enter Element at %d%d positon:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<3;j++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d",a[i][j])
        }
        printf("\n");
    }
    return 0;
}