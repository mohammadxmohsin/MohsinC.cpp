/*Conditional Statement:
Nested if else or Ladderif else:

Q.Read marks in 3 subjects of a student,use if else statements to perform following actions
a:If marks are invalid,Display result as invalid and exit.
b:If student is fail in any of the subjectsdisplay fail and exit
c:If student id Pass,Calculate:total,percent,grade.
d:If percent>75 "A",If percent>60 "B",If percent>50 "C",else "D"
*/
#include<stdio.h>
int main()
{
    int eng,math,sci,total;
    float percent;
    printf("Enter marks of three Subjects: ");
    scanf("%d%d%d",&eng,&math,&sci);
    if(eng>100||math>100||sci>100||eng<0||math<0||sci<0)
    {
        printf("\nMarks are Invalid,Please enter correct marks.");
    }
    else
    {
        if(eng<35||math<35||sci<35)
    {
        printf("\nFAIL");
    }
    else if(eng>35||math>35||sci>35)
    {
        printf("\nPASS");
        total=eng+math+sci;
        percent=total/3.0;
        printf("\nTotal marks is:%d",total);
        printf("\nPercentage is:%.2f",percent);
        if(percent>=75)
        {
            printf("\nA Grade");
        }
        else if(percent>=60)
        {
            printf("\nB Grade");
        }
        else if(percent>=50)
        {
            printf("\nC Grade");
        }
        else 
        {
            printf("\nD Grade");
        }
    }
    }  
    return 0;
}