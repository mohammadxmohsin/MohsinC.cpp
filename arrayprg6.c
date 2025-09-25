#include<stdio.h>
int main()
{
    int i,n,array[10],search,flag=0;
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
    printf("\nEnter a Number to Search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==array[i])
    {
        printf("\nThe Number to Search is %d at index %d",search,i);
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("\nSearch is not found in this Array");
    }
    return 0;
}