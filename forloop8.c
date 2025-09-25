/*For Loop Programs:
 Q.Find a number raised to another number.
*/
#include<stdio.h>
int main()
{
    int n,p,r=1,i;
    printf("\nEnter Number and Power: ");
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        r=r*n;
    }
    printf("\n%d raised to %d = %d",n,p,r);
    return 0;
}