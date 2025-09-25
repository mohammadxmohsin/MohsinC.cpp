#include<stdio.h>
//Append data in File
int main()
{
    FILE (*ptr);
    char ch;

    ptr=fopen("example.txt","a");
    if(ptr==NULL)
    {
        printf("\nFile is Unable to Create or Access!");
    }
    else
    {
        printf("\nEnter Data to append in the File:\n");
        while(1)
        {
            ch=getchar();
            if(ch==EOF)
                break;
            else
                fputc(ch,ptr);

        }
        fclose(ptr);
    }


    return 0;
}