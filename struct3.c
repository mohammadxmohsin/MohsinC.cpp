#include<stdio.h>
int main()
{
    struct employee
    {
        int eid,basic_pay,hra;
        char ename[50];
        float gross,net,tax;
    }e1,e2,e3,e4,e5;

    printf("\nEnter Employee ID: ");
    scanf("%d",&e1.eid);
    printf("\nEnter Employee Name: ");
    scanf("%s",&e1.ename);
    printf("Enter basic salary of Employee: ");
    scanf("%d",&e1.basic_pay);
    e1.gross=e1.basic_pay+e1.hra;
    




    return 0;
}