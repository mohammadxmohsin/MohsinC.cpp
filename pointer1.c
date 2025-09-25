#include<stdio.h>
int main()
{
    int x,*p1;
    float y,*p2;
    char z,*p3;

    x=200;
    p1=&x;
    printf("\nAdress of x is =%d",p1);
    y=25.33; 
    p2=&y;
    printf("\nAdress of y is =%u",p2);
    z='w';
    p3=&z;
    printf("\nAdress of z is =%u",p3);
    printf("\nThe value in the Variable x=%d",*p1);
    printf("\nThe value in the Variable y=%.2f",*p2);
    printf("\nThe value in the Variable z=%c",*p3);
    

    return 0;
}