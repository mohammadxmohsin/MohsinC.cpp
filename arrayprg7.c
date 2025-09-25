#include<stdio.h>
int main()
{
    int i,n,array[10],sum;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nFinal Array is:\n",n);   
    for(i=0;i<n;i++)
    {
        printf("%5d",array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]%5==0 && array[i]%9==0)
        {
            for(i=0;i<n;i++)
            {
                if(array[i]%5==0 && array[i]%9==0)
                sum+=array[i];
                printf("\nSum of Number is %d",sum);     
            }           
        }
        else{
            printf("\nNumbers are not Divisible by 5 and 9");
        }
    }

    return 0;
}