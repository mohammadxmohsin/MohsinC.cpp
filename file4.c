#include<stdio.h>
int main()
{
    FILE *ptr,*ptw;
    char ch;
    ptr=fopen("example.txt","r");
    ptw=fopen("example1.txt","w");

    if(ptr==NULL || ptw==NULL)
    {
        printf("\nError occur when Accessing a File");
    }
    else
    {
        while(1)
        {
            ch=fgetc(ptr);
            if(ch==EOF)
                break;
            else 
                fputc(ch,ptw) ;
        }
        printf("\nData Copied Backup Taken!");
        fclose(ptr);
        fclose(ptw);
    }
    return 0;
}