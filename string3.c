#include<stdio.h>
#include<string.h>
int main()
{
    char uname[5][20]={"abc@gmail.com","xyz@gmail.com","pqr@gmail.com","lmn@gmail.com","mhs@gmail.com"};
    char passwd[5][20]={"abc@123","xyz@123","pqr@123","lmn@123","mhs@123"};

    char user[20],pass[20];
    int i,p,flag=0;

    printf("'\nEnter Your Username: ");
    scanf("%s",&user);
    printf("'\nEnter Your Password: ");
    scanf("%s",&pass);

    for(i=0;i<5;i++)
    {
        if(strcmp(user,uname[i])==0)
        {
            printf("\nCorrect Username!");
            p=i;
            flag=1;
            break;
        }
    }
    if(i==5)
        {
            printf("\nInvalid Username");
        }


    for(i=0;i<5;i++)
    {
        if(strcmp(pass,passwd[i])==0)
        {
            printf("\nYour Password is Correct!");
            p=i;
            flag=1;
            break;
        }
    }
    if(i==5)
        {
            printf("\nInvalid Password");
            printf("\nPlease Enter Correct Password");
        }    

}