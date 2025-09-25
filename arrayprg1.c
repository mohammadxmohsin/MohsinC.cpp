#include<stdio.h>
int main()
{
    float temp[10],total=0,average;
    int i;
    printf("\nEnter 10 days temperature: ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&temp[i]);
        total+=temp[i];
    }
    for(i=0;i<10;i++)
    {
        printf("\ntemp[%d]=%.2f",i,temp[i]);
    }
    printf("\nTotal=%.2f",total);
    average=total/10;
    printf("\nAvrage is : %.2f",average);  
    return 0;
}