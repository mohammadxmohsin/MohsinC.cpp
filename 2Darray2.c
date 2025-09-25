/*
Programs on 2D Array:
 Q.Creat a 2D array(matrix) of order r1xc1 and r2xc2 and find addition of these 2 arrays.
*/
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,a[5][5],b[5][5],i,j;
    printf("\nEnter Order of 1st Array: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter Order of 2nd Array: ");
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2)
    {
        printf("\nEnter %d Elements of First Array:\n",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter %d Elements of Second Array:\n",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nThe First Array is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]);
            }
            printf("\n");
        }
        printf("\nThe Second Array is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",b[i][j]);
            }
            printf("\n");
        }
        printf("\nAddition of both arrays are:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",a[i][j]+b[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("\nOrders Are Not Same Addition not Performed");
    }

    return 0;
}