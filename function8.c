#include<stdio.h>
#include<math.h>

int Net_salary(int b_salary)
{
    int ta,gross_salary,hra,net;
    printf("\nEnter Employee Basic Salary: ");
    scanf("%d",&b_salary);
    ta=b_salary*0.04;
    printf("\nThe ta is:%d",ta);
    
    hra=b_salary*0.1;
    printf("\nThe hra is:%d",hra);

    gross_salary=b_salary+ta+hra;
    printf("\ngross Salary is:%d",gross_salary); 

    net=gross_salary*12;
    printf("\nThe Net salary is: %d",net);

    return 0;
}
int main()
{
    char name[10],id[10];
    int n,b_salary;
    printf("\nEnter Employee Name: ");
    scanf("%s",&name);
    printf("\nEnter Employee ID: ");
    scanf("%s",&id);
    
    n=Net_salary(b_salary);

    
    
    return 0;
}