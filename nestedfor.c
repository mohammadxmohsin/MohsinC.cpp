
 /*Q.Implement the following pattern.
 *
 * *
 * * *
 * * * *
 * * * * *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*  ");
            
        }
        printf("\n");
    }
    return 0;
}
 Q.Implement the following pattern.
 * * * * *
 * * * *
 * * * 
 * * 
 * 

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}
 Q.Implement the following pattern.
 5 4 3 2 1
 5 4 3 2 
 5 4 3
 5 4
 5
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%-5d",j);
            
        }
        printf("\n");
    }
    return 0;
}
Q.Implement the following pattern.
 1 
 1 2 
 1 2 3
 1 2 3 4
 1 2 3 4 5  a
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%-5d",j);
            
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=15;j++)
        {
            printf("%-5d",j);
            
        }
        printf("\n");
    }
    return 0;
}
  