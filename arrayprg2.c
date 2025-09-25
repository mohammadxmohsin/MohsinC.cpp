#include<stdio.h>
int main()
{
    float sub[6],percent,total;
    int i; 
    printf("\nEnter marks of 6 subjects: ");
    for(i=0;i<6;i++)
    {
        scanf("%f",&sub[i]);
        printf("\nMArks in sub[%d]=%.2f",i,sub[i]);
        total+=sub[i];
    }
    printf("\nTotal=%.2f",total);
    percent=total/6.0;
    printf("\nPercentage is : %.2f",percent);  

    return 0;
}