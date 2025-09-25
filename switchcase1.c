//Switch Case:
#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("\nyou entered 1");
        break;
        case 2:
        printf("\nyou entered 2");
        break;
        case 3:
        printf("\nyou entered 3");
        break;
        default:
        printf("\nInvalid Data");
        break;
        
    }
    return 0;
}