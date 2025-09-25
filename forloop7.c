/*For Loop Programs:
 Q.Find Factorial of a number by using for loop.
*/
#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("\nEnter any Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\n%d Factorial is = %d",n,f);
    return 0;
}