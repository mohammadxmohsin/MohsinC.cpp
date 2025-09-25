#include<stdio.h>
#include<string.h>

int full_name(char name1[10],char name2[10])
{
    printf("\nName is:%s",strupr(strcat(name1,name2)));
    
}
int main()
{
    char fname[10],lname[10];
    int full;
    printf("\nEnter the First name: ");
    scanf("%s",&fname);
    printf("\nEnter the Last name: ");
    scanf("%s",&lname);
    full=full_name(fname,lname);
    
    return 0;
}