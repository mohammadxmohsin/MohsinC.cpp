#include<stdio.h>
#include<string.h>
int main()
{
    char fruits[50][20],f[20],temp[20];
    int i=0,j,n;

    printf("\nEnter Fruit Name,Type Enter to Stop the List");

    while(1)
    {
        fflush(stdin);
        printf("\nEnter Fruit Name ,Enter Stop to stop:  ");
        scanf("%s",&f);
        strlwr(f);
        //printf("%s",f);

        if(strcmp(f,"stop")==0)
        break;

        else
        {
            strcpy(fruits[i],f);
            i++;     
        }
    }
    n=i;
    printf("\nThe List is:");
    for(i=0;i<n;i++)
    {
        printf("\n %s",fruits[i]);
    }

     printf("\nThe Sorted List is:");

     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(fruits[i],fruits[j])>0)
            {
                strcpy(temp,fruits[i]);
                strcpy(fruits[i],fruits[j]);
                strcpy(fruits[j],temp);
            }
        }
     }

    return 0;    
}