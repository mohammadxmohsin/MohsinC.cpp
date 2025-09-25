//Read the side of hexagon and calculate its area.
#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    float area;
    printf("enter the side length of Hexagon: ");
    scanf("%d",&side);
    area=(3*sqrt(3)/2)*(side*side);
    printf("The area of Hexagon is:%-9.3f",area);

    return 0;
}