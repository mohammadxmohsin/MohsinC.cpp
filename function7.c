//Find Fibonacii number using function call:
#include<stdio.h>
int fib(int n)
{
    int f;
    if(n==0 || n==1)
    return 1;
    else
    f=fib(n-1)+fib(n-2);
    return f;
}
int main()
{
    int F,N;
    printf("\nEnter a Number: ");
    scanf("%d",&N);
    F=fib(N);
    printf("\nFibonacii of %d is = %d",N,F);
    return 0;
}