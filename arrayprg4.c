#include<stdio.h>
int main()
{
    int n,i,array[20],odd[10],even[10],o,e;
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
    o=0;
    e=0;
    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
            even[e]=array[i];
            e++;
        }
        else
        {
            odd[o]=array[i];
            o++;
        }
        
    }
    printf("\nEven Array is:\n");
    for(i=0;i<e;i++)
    {
        printf("%5d",even[i]);
    }
    printf("\nOdd Array is:\n");
    for(i=0;i<o;i++)
    {
        printf("%5d",odd[i]);
    }
    

    return 0;
}