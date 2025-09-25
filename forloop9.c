/*For Loop Programs:
 Q.Find a number raised to itself.
*/
#include<stdio.h>
int main()
{
    int n,r=1,i;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*n;
    }
    printf("\n%d raised to %d = %d",n,n,r);
    return 0;
}