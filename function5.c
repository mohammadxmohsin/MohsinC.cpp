//call by pointer:
#include<stdio.h>
int value(int *x,int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter Swap");
    printf("\nx=%d",*x);
    printf("\ny=%d",*y);
    return 0;
}
int main()
{
    int a=100,b=500;
    
    printf("\nBefore Swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    value(&a,&b);  //function call
    
    return 0;
}