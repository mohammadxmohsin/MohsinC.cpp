//File Encryption and Decryption:

#include<stdio.h>
int main()
{
    FILE *p1,*p2,*p3;
    char ch,key='p';
    p1=fopen("data.txt","rb");
    p2=fopen("encrypted.txt","wb");
    if(p1==NULL || p2==NULL)
    {
        printf("\nFile I/O Error!");
    }
    else
    {
        while(1)
        {
            ch=fgetc(p1);
            if(ch==EOF)
                break;
            else 
            ch=ch^key;
            fputc(ch,p2);
        }fclose(p1);
        fclose(p2);
    }
    printf("\nFile Decryption Process");

    p2=fopen("encrypted.txt","rb");
    p3=fopen("decrypted.txt","wb");
    if(p2==NULL || p3==NULL)
    {
        printf("\nFile I/O Error!");
    }
    else
    {
        while(1)
        {
            ch=fgetc(p2);
            if(ch==EOF)
                break;
            else 
            ch=ch^key;
            fputc(ch,p3);
        }fclose(p2);
        fclose(p3);
    }

    return 0;
}
