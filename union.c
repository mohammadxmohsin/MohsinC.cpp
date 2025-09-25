#include<stdio.h>
int main()
{
    union data
    {
        int x;
        char y;
        char str[20];
    };
    union data d1;
    d1.x=100;
    
    printf("%d",sizeof(d1));
    printf("\n%d",d1.x);
    printf("\n%c",d1.y);
    printf("\n%s",d1.str);
    
    return 0;
}