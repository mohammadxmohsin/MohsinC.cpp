#include<stdio.h>
int main()
{
    FILE *p1,*p2;
    char ch;
    p1=fopen("data.txt","r");
    p2=fopen("example2.txt","w");

    if(p1==NULL || p2==NULL)
    {
        printf("\nUnable to Access the File!");
    }
    else
    while(1)
    {
        ch=fgetc(p1);
        if(ch==EOF)
             break;
        else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        {
            ch-=2;
            if(ch=='a')
            {
                ch='@';
            }
            if(ch=='e')
            {
                ch='#';
            }
            if(ch=='i')
            {
                ch='&';
            }
            if(ch=='o')
            {
                ch='*';
            }
            if(ch=='u')
            {
                ch='$';
            }
        }
        else if(ch>=48 && ch<=57)
        {
            ch='%';
        }
        else
        {
            ch='!';
        }
        fputc(ch,p2);    
    }fclose(p1);
    fclose(p2);


    return 0;
}