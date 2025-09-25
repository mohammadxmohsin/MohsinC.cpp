//Nested Switch Case:
#include<stdio.h>
#include<math.h>
int main()
{
    int o,l,b,h,s1;
    char s,n;
    float r,a,num,square,cube,sqr_root,cube_root;
    printf("1:Shape");
    printf("\n2:Numbers");
    printf("\n3:Characters");
    printf("\n4:Distance");
    printf("\n5:Exit");
    printf("\nChoose one option: ");
    scanf("%d",&o);

    switch(o)
    {
        case 1:
        printf("\n1:Area of circle");
        printf("\n2:Area of Rectangle");
        printf("\n3:Area of Triangle");
        printf("\n4:Area of Square");
        printf("\nChoose one Option: ");
        scanf("%c",&s);

        switch(s)
        {
            case 'a':
            printf("\nEnter Radius of circle: ");
            scanf("%f",&r);
            a=3.1414*r*r;
            printf("\nArea of Circle is %.2f",a);
            break;

            case 'b':
            printf("\nEnter length and breadth: ");
            scanf("%d%d",&l,&b);
            a=l*b;
            printf("\nArea of Rectangle is %.2f",a);
            break;

            case 'c':
            printf("\nEnter height and base: ");
            scanf("%d%d",&l,&h);
            a=0.5*l*h;
            printf("\nArea of Triangle is %.2f",a);
            break;

             case 'd':
            printf("\nEnter number of sides of square: ");
            scanf("%d",&s1);
            a=s*s;
            printf("\nArea of Square is %.2f",a);
            break;
        }
        break;

        case 2:
        printf("\na:Square");
        printf("\nb:Cube");
        printf("\nc:Square Root");
        printf("\nd:Cube Root");
        printf("\nChoose one Option: ");
        fflush(stdin);
        scanf("%c",&n);

        switch(n)
        {
            case 'a':
            printf("\nEnter the number: ");
            scanf("%f",&num);
            square=num*num;
            printf("\nSquare of number is %.2f",square);
            break;

            case 'b':
            printf("\nEnter the number: ");
            scanf("%f",&num);
            cube=num*num*num;
            printf("\nCube of number is %.2f",cube);
            break;

            case 'c':
            printf("\nEnter the number: ");
            scanf("%f",&num);
            sqr_root=sqrt(num);
            printf("\nSquare root of number is %.2f",sqr_root);
            break;

            case 'd':
            printf("\nEnter the number: ");
            scanf("%f",&num);
            cube_root=cbrt(num);
            printf("\nCube root of number is %.2f",cube_root);
            break;
        }
        break;

        
    }
    return 0;
}