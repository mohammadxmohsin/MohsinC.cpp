#include<stdio.h>
float max_temp(float arr[],int n)
{
    float max=arr[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int i,n;
    float temp[10];
    printf("\nEnter 10 days temperature of your city: ");
    for(i=1;i<10;i++)
    {
        scanf("%f",&temp[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nDay %d temp is=%.2f",i,temp[i]);
    }
    n=max_temp(temp,10);
    printf("\nMaximum temperature is =%.2f",n);
    return 0;
}