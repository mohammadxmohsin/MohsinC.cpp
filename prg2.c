//Use of Conditional Operators:
#include<stdio.h>
int main()
{
    int phy,chem,math,total;
    float percentage;
    char grade;
    printf("\nEnter the marks of 3 subjects: ");
    scanf("%d%d%d",&phy,&chem,&math);
    total=phy+chem+math;
    percentage=total/3.0;

    grade=(percentage>=75)?'A':(percentage>=60)?'B':(percentage>=50)?'C':'D';
    printf("\nTotal= %d",total);
    printf("\nPercentage= %.2f",percentage);
    printf("\nGrade= %c",grade);

    

    return 0;
}