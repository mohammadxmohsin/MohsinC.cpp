//Use of SizeOf Operators:
#include<stdio.h>
#include<string.h>
int main()
{
    int x=225;
    float y=45.65456;
    long int z=3265654;
    char v='V';
    char size[25];
    strcpy(size,"alpha");
    printf("\n%d",sizeof(x));
    printf("\n%d",sizeof(y));
    printf("\n%d",sizeof(z));
    printf("\n%d",sizeof(v));
    printf("\n%d",sizeof(size));
    return 0;
}