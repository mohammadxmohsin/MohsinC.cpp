/*
 Programs on 2D Array:
 Q.Creat a 2D array(matrix) of order 3,4 and display it in matrix form on screen:
*/
#include<stdio.h>
int main()
{
    int a1[3][4],i,j;
    printf("\nenter Elements of Array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%5d",a1[i][j]);  

        }printf("\n");
    }

    return 0;
}