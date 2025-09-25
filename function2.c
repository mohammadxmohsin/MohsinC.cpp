#include<stdio.h>
#include<string.h>
int compare(char *str1,char *str2)
{
    if(strlen(str1)>strlen(str2))
    {
        return 1;
    }
    else if(strlen(str1)<strlen(str2))
    {
        return -1;
    }
    else 
    return 0;
}
int main()
{
    char str1[5],str2[5];
    int i;
    printf("Enter Two strings: ");
    scanf("%s%s",&str1,&str2);
    i=compare(str1,str2);
    printf("\n%d",i);

    return 0;
    
}