//Find factorial of number using funcion call:
#include<stdio.h>
int fact(int n)
{
    int f;
    if(n==1)
    return 1;
    else
    f=n*fact(n-1);
    return f;
}
int main()
{
    int F,N;
    printf("\nEnter a Number: ");
    scanf("%d",&N);
    F=fact(N);
    printf("\nFactoial of %d = %d",N,F);
    return 0;
}