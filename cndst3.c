/*Conditional Statements:
Q.Check if Character is Vowel or not.
*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("\nCharacter is vowel");
    }
    else
    {
        printf("\nCharacter is consonant");
    }
    return 0;
}