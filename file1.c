#include<stdio.h>
//Read data in File
int main()
{
    FILE (*ptr);
    char ch;

    ptr=fopen("example1.txt","r");
    if(ptr==NULL)
    {
        printf("\nFile is Not Found!");
    }
    else
    {
        while(1)
        {
            ch=fgetc(ptr);
            if(ch==EOF)
                break;
            else
                putchar(ch);
        }
        fclose(ptr);
    }
    return 0;
}