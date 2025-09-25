//Use of operators
#include<stdio.h>
#include<string.h>
int main()
{
    int x=25,y=30,z;
    //Assignment Operators.
    x+=10;   
    printf("x=%d",x);
    y-=15;
    printf("\ny=%d",y);
    x*=2;
    printf("\nx=%d",x);
    y/=5;
    printf("\ny=%d",y);

    //Increment Decrement operators.
    //Postfix
    z=x++;   
    printf("\n");
    printf("\nz=%d \t x=%d",z,x);
    z=x--;
    printf("\n");
    printf("\nz=%d \t x=%d",z,x);
    //Prefix
    z=++x;   
    printf("\n");
    printf("\nz=%d \t x=%d",z,x);
    z=--x;
    printf("\n");
    printf("\nz=%d \t x=%d",z,x);

    //Bitwise Operator:




    return 0;
}