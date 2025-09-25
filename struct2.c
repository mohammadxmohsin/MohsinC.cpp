#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll,marks[6],total;
        float percent;
        char name[50],grade[20];
    }s1,s2;
    int i;
    printf("Enter First Student Details:\n");
    fflush(stdin);
    printf("Enter student Name,Roll Number: ");
    scanf("%s%d",&s1.name,&s1.roll);
    printf("Enter 6 subjects marks of student:\n");

    s1.total=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&s1.marks[i]);
        s1.total+=s1.marks[i];
    }
    s1.percent=s1.total/6.0;
    if(s1.percent>=70)
    {
        strcpy(s1.grade,"A Grade");
    }
    else if(s1.percent>=60)
    {
        strcpy(s1.grade,"B Grade");
    }
    else if(s1.percent>=50)
    {
        strcpy(s1.grade,"C Grade");
    }
    else
    {
        strcpy(s1.grade,"D Grade");
    }

    printf("%s \t %d \t %d \t %.2f \t %s",s1.name,s1.roll,s1.total,s1.percent,s1.grade);

    
    printf("\nEnter Second Student Details:\n");
    fflush(stdin);
    printf("Enter student Name,Roll Number: ");
    scanf("%s%d",&s2.name,&s2.roll);
    printf("Enter 6 subjects marks of student:\n");

    s2.total=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&s2.marks[i]);
        s2.total+=s2.marks[i];
    }
    s2.percent=s2.total/6.0;
    if(s2.percent>=70)
    {
        strcpy(s2.grade,"A Grade");
    }
    else if(s2.percent>=60)
    {
        strcpy(s2.grade,"B Grade");
    }
    else if(s2.percent>=50)
    {
        strcpy(s2.grade,"C Grade");
    }
    else
    {
        strcpy(s2.grade,"D Grade");
    }

    printf("%s \t %d \t %d \t %.2f \t %s",s2.name,s2.roll,s2.total,s2.percent,s2.grade);


    return 0;
}