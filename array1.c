#include<stdio.h>
int main()
{
    int a[10]={25,44,85,66,55,45,85,50,52,69},i;
    /*printf("\n%d",a[0]);
    printf("\n%d",a[1]);
    printf("\n%d",a[2]);*/
    for(i=0;i<10;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\nEnter 10 Numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAfter Storing the values by the User");
    for(i=0;i<10;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }


    return 0;
}