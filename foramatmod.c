#include<stdio.h>
#include<string.h>
int main()
{
    int X=225;
    float Y=62.456312;
    char M='L';
    char username[30];
    strcpy(username,"mohdmohsin");

    printf("\n%d",X);
    printf("\n%f",Y);
    printf("\n%c",M);
    printf("\n%s",username);

    printf("\n%5d",X);
    printf("%20f",Y);
    printf("%10c",M);
    printf("\n%-20s",username);
    printf("%-20s",username);
    printf("%-20s",username);
    printf("\n%20s",username);
    printf("%20s",username);
    printf("%20s",username);
    printf("\n%10o",X);
    return 0;




    
    


   
}