#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    c=++a;
    c=--b;
    printf("\nThe value of c is:%d",a);
    printf("\nThe value of c is:%d",b);
    c=a++;
    c=b--;
    printf("\nThe value of c is:%d",a);
    printf("\nThe value of c is:%d",b);
    return 0;
}