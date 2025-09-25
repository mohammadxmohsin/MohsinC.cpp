#include<stdio.h>
int main()
{
    int i,n,array[10];
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
    
    return 0;
}