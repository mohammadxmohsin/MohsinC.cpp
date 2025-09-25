#include <stdio.h>

int max_num(int num[],int size) 
{
    int max=num[0];
    for(int i=1;i<size;i++) 
    {
        if(num[i]>max) 
        {
            max=num[i];
        }
    }
    return max;
}

int main() 
{
    int num[3],highest;

    printf("Enter 3 Numbers: ");
    for (int i=0;i<3;i++) 
    {
        scanf("%d",&num[i]);
    }

    for (int i=0;i<3;i++) 
    {
        printf("\nNumber %d is:%d",i+1,num[i]);
    }

    highest = max_num(num,3);

    printf("\nHighest number is:%d",highest);

    return 0;
}
