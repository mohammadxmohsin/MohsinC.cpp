#include<stdio.h>
#include<string.h>
int main()
{
    char fruits[10][20]={"Mango","Apple","Banana","Dates"},i;
    char guess[20];

    printf("\nEnter your Guess: ");
    scanf("%s",&guess);
    
    for(i=0;i<4;i++)
    {
        if(strcmp(guess,fruits[i])==0)
        {
            printf("\nFruit is Found.");
            printf("\nThis Fruit is Present at %d",i);
            break;
        }
    }
    if(i==4)
    {
        printf("\nPlease Enter Valid Name");
    }
    return 0;
}