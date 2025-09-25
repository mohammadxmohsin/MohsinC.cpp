/*Conditional Statement:
Q.Find Highest number from Three numbers
*/
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter Three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("\nA is bigger number");
 if(b>a&&b>c)
    printf("\nB is bigger number");
 if(c>a&&c>b)
    printf("\nC is bigger number");
    return 0;
}