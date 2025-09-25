#include<stdio.h>
int main()
{
    int i,n,a1[10],a2[10],j,large[10],temp;
    printf("\nEnter Array 1 Elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("\nEnter Array 2 Elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("\nArray 1 is:\n");
    for(i=0;i<10;i++)
    {
        printf("%5d",a1[i]);
    }
    printf("\nArray 2 is:\n");
    for(i=0;i<10;i++)
    {
        printf("%5d",a2[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a1[i]>a1[j])
            {
                temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;     
            }
            if(a2[i]>a2[j])
            {
                temp=a2[i];
                a2[i]=a2[j];
                a2[j]=temp;     
            }
            
        }
    }
    for(i=0;i<10;i++)
    {
        if(a1[i]>a2[i])
        {
            large[i]=a1[i];

        }
        else{
            large[i]=a2[i];
        }
    }
    printf("\nThe Largest Array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%5d",large[i]);
    }


    return 0;
}    