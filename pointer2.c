#include<stdio.h>

void CET_marks(int *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(*(p+i)>=100)
            *(p+i)=1;
        else
        *(p+i)=-1; 
    }         
}

int main()
{
    int i,a[10];
    printf("\nEnter 10 Students Marks: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    CET_marks(&a[0]);
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }

    return 0;
}