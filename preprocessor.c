#include<stdio.h>
#include "prg.c"
#define PI 3.1414
#define AREA(R) PI*R*R
#define version 3 
#define Model 11 
#define NAME(n) printf("\nYour Name is:%s",n);

int main()
{
    greetings();
    intro();
    printf("\nMy Name is XYZ");
    printf("\nThe Value of PI is:%.2f",PI);
    printf("\nArea is %.2f",AREA(4));
    printf("\nVersion is %d",version);
    printf("\nModel is %d",Model);
    NAME("Mohsin");
    return 0;
}