#include<stdio.h>
int main()
{
    int m[10][10],i,j,n,o,sum=0;
    char stop;
    printf("\nEnter order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter %d Elements:\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nThe matrix Looks like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%-5d",m[i][j]);
        }printf("\n");
    }
    while(1)
    {

        printf("\n1: Make All Diagonal Elements to 1.");
        printf("\n2: Calculate Sum of all Upper Triangle Elements.");
        printf("\n3: Make all Upper triangle and Lower Triangle as zero.");
        printf("\n4: Calculate Sum of all Lower Triangle Elements.");
        printf("\n5: Find Transpose of the Matrix.");

        printf("\nType One Option: ");
        scanf("%d",&o);

        switch(o)
        {
            case 1:
            printf("\nThe Matrix Looks Like:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                        m[i][j]=1;
                    printf("%-5d",m[i][j]);
                }printf("\n\n");
            }
            break;

            case 2:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i<j)
                    sum=sum+m[i][j];       
                }
            }
            printf("\nThe Sum of Upper Triangle Elements are %d",sum);
            break;
            
            case 3:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i>j && i<j)
                    {
                        m[i][j]=0;
                        printf("%-5d",m[i][j]);
                    }
                }printf("\n");
            }
            break;

            case 4:
            break;

            case 5:
            break;

            default:
            printf("\nInvalid Option Please Select correct option!");
            break;
        }
    }
    fflush(stdin);
    printf("\nTo STOP Please Enter S: ");
    stop=getchar();
    
    
    return 0;
}