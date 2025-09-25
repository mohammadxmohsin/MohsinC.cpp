#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    int p,c=0;

    ptr=fopen("data.txt","r");
    if(ptr==NULL)
    {
        printf("\nFile I/O Error!");
    }
    else
    {
        fseek(ptr,0,SEEK_END);
        p=ftell(ptr);
        printf("\nCurrent Location of ptr=%d",ftell(ptr));
        while(p>=-1)
        {
            printf("\n %d \t",p);
            ch=fgetc(ptr);
            putchar(ch);
            fseek(ptr,-c,SEEK_END);
            c++;
            p--;
        }
        /*while((ch=fgetc(ptr))!=EOF)
        {
            printf("\n %d \t %c",ftell(ptr),ch);
        }*/
        printf("\nCurrent Location of ptr=%d",ftell(ptr));
    }fclose(ptr);

    return 0;
}