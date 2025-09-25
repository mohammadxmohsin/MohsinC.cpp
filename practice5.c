//Read the temperature from the user in clecius and convert it into k and f
#include<stdio.h>
int main()
{
    float c,f,k;
    printf("Enter the celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\nyour f is:%f",f);
    k=c+273;
    printf("\nyour k is:%f",k);
    return 0;
}