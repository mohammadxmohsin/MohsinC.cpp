/*Switch Case:
Q.Write a menu driven program by using switch case to
  a. find area of circle if diameter is given.
  b.area of circle if side is given.
  
  */
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    char o;
    int d,s,l,b,h,b1;
    float a,a1,pr,dg;
    printf("a: for area of circle");
    printf("\nb: for area of square");
    printf("\nc: for perimeter of rectangle");
    printf("\nd: for diagonal of right triangle");
    printf("\ne: for exit from the program");
    printf("\nType an option: ");
    scanf("%c",&o);
    switch(o)
    {
        case 'a':
        printf("\nEnter diameter of circle: ");
        scanf("%d",&d);
        a=(d/2)*(d/2)*3.1414;
        printf("\nArea of circle is %.2f",a);
        break;

        case 'b':
        printf("\nEnter the side of Square: ");
        scanf("%d",&s);
        a1=(s*s);
        printf("\nArea of Square is %.2f",a1);
        break;

        case 'c':
        printf("\nEnter lentgh and breadth: ");
        scanf("%d%d",&l,&b);
        pr=2*(l+b);
        printf("\nPerimeter of rectangle is %.2f",pr);
        break;

        case 'd':
        printf("\nEnter height and base: ");
        scanf("%d%d",&h,&b1);
        dg=sqrt(h*h+b1*b1);
        printf("\nDiagonal of right triangle is %.2f",dg);
        break;

        case 'e':
        printf("\nPress enter to Exit from the Program...");
        getch();
        break;

        default:
        printf("\nInvalid Data!");
        break;
    }
    return 0;
}