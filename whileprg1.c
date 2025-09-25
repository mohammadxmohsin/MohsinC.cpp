

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int r,guess,count=1,score=100;
    srand(time(NULL));
    r=rand()%100+1;
    printf("\n%d",r);

    while(count<=5)
    {
        printf("\nGuess Number between 1 to 100: ");
        scanf("%d",&guess);
        if(guess<r)
        {
            printf("\nYour Guess is too Low,Please choose larger Number");
        }
        else if(guess>r)
        {
            printf("\nYour Guess is too High,Please choose Smaller Number");
        }
        else
        {
            printf("\nCongratulation! Your Guess is Correct");
            printf("\nScore is: %d",score);
            break;
            
        }
        count++;
        score-=10;
        if(count>5)
        {
            printf("\nYou Lost the game!");
                  
        }

    }
    return 0;

}