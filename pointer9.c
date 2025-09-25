#include<stdio.h>

int display(int a,int b)
{
    return a+b;
}
int main()
{
    int(*ptr)(int,int);
    ptr=display;
    printf("\n%d",ptr(22,54));
    return 0;
}