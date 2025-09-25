#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[20],str2[20],str3[20],stop;
    int o;
    char choice;

    printf("\nEnter a First string: ");
    scanf("%s",&str1);
    printf("\nEnter a Second string: ");
    scanf("%s",&str2);

    while(1)
    {

        printf("\n1: String Length");
        printf("\n2: String Copy");
        printf("\n3: String Concatenate");
        printf("\n4: String Compare");
        printf("\n5: String upper case");
        printf("\n6: String Lower case");
        printf("\n7: String Reverse");

        printf("\nSelect One Option: ");
        scanf("%d",&o);
        
        switch(o)
        {
            case 1:
            {
                printf("\nLength of First String is:%d",strlen(str1));
                printf("\nLength of Second String is:%d",strlen(str2));
            }
            break;
            
            case 2:
            {
                strcpy(str2,str1);
                printf("\nThe First String:%s",str1);
                printf("\nThe Second String:%s",str2);
            }
            break;

            case 3:
            printf("\nConcatenation of Strings are:%s",strcat(str1,str2));
            break;

            case 4:
            {
                if(strcmp(str1,str2)==0)
                {
                    printf("\nString are equal");
                }
                else if(strcmp(str1,str2)==1)
                {
                    printf("\nFirst String is Larger");
                }
                else
                printf("\nSecond String is Larger");
            }
            break;

            case 5:
            {
                printf("\nUpper Case of String1 is:%s",strupr(str1));
                printf("\nUpper Case of String2 is:%s",strupr(str2));
            }
            break;

            case 6:
            {
                printf("\nLower Case of String1 is:%s",strlwr(str1));
                printf("\nLower Case of String2 is:%s",strlwr(str2));
            }
            break;

            case 7:
            {
                printf("\nReverse of String1:%s",strrev(str1));
                printf("\nReverse of String2:%s",strrev(str2));
            }
            break;

            default:
            {
                printf("\nPlease Select Correct Option between 1 to 7!");
            }
            break;
        }

    printf("\nDo you want to Continue? (y/n): ");
    scanf("%c",&choice);
        if(choice=='n' || choice=='N')
        {
            printf("\nGoodbye");
            break;
        }
    }   
    return 0;
}