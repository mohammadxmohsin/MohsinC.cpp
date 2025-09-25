#include<stdio.h>
int main()
{
    int i,n,array[10],j,temp;
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
    printf("\nArray in Decending order:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            
        }
        printf("%-5d",array[i]);
    }
    
    return 0;
}