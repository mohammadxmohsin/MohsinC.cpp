/*
Programs on 2D Array:
 Q.Creat a 2D array(matrix) of order r1xc1 and r2xc2 and find Multiplication of these 2 arrays.
*/
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],r1,c1,r2,c2,i,j,k,sum,c[5][5];
    printf("\nEnter Order of First Matrix:");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter Order of Second Matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("\nMultiplication will Not be Performed");
    }
    else
    {
        printf("\nEnter %d Elements of First Matrix:\n",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter %d Elements of Second Matrix:\n",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nThe First Matrix is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]);
            }printf("\n");
        }
        printf("\nThe Second Matrix is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",b[i][j]);
            }printf("\n");
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }c[i][j]=sum;
            }
        }
        printf("\nMultiplication of both Matrix are:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",c[i][j]);
            }printf("\n");
        }
    }
    return 0;
}