//Read the base and height of triangle and find its area.
#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter the base of triangle: ");
    scanf("%d",&base);
    printf("Enter the height of triangle: ");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("\nThe area of triangle is:%6.3f",area);
    return 0;
}
