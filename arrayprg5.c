#include<stdio.h>
int main()
{
    int i,n,array[10],max,min;
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
    min=array[0];
    max=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("\nMax Number is %d",max);
    printf("\nMin Number is %d",min);
    return 0;
}