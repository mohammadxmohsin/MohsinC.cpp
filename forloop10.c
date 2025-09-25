/*For Loop Programs:
 Q.Check if a number is Prime or not by using for loop.
*/
#include<stdio.h>
int main()
{
    int n,d;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for(d=2;d<=n/2;d++)
    {
        if(n%d==0)
        {
        printf("\nNumber is not Prime");
        printf("\nBecause %d is Divisible by %d",n,d);
        break;
        }
    }
    if(d>n/2)
    {
        printf("\n%d is a Prime number",n);     
    }
    return 0;
}