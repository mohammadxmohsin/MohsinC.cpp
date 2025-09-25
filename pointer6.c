#include<stdio.h>

struct customer
    {
        int cid;
        char cname[50];
        float bill_amount,paid_amount,balance_amount;   
    }c1,*ptr,c[3];

void displayAllAmount(struct customer *p)
{
    float total_amount=0,total_paid=0,total_balance=0;
    int i;
    for(i=0;i<3;i++)
    {
        total_amount+=(p+i)->bill_amount;
        total_paid+=(p+i)->paid_amount;
        total_balance+=(p+i)->balance_amount;
    }
    printf("\nAll Data\n");
    printf("\nTotal Bill Amount = %.2f",total_amount);
    printf("\nTotal Paid Amount = %.2f",total_paid);
    printf("\nTotal BAlance Amount = %.2f",total_balance);
}

int main()
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nEnter Customer ID: ");
        scanf("%d",&c[i].cid);
        printf("\nEnter Customer Name: ");
        scanf("%s",&c[i].cname);
        printf("\nEnter Customer BIll Amount: ");
        scanf("%f",&c[i].bill_amount);
        printf("\nEnter Customer Paid Amount: ");
        scanf("%f",&c[i].paid_amount);
        c[i].balance_amount=c[i].bill_amount-c[i].paid_amount;
    }

    ptr=&c[0];

    for(i=0;i<3;i++)
    {
        printf("\nAll Details:\n");
        printf("\nCustomer ID:%d",(ptr+i)->cid);
        printf("\nCustomer Name:%s",(ptr+i)->cname);
        printf("\nCustomer BIll Amount:%.2f",(ptr+i)->bill_amount);
        printf("\nCustomer Paid Amount:%.2f",(ptr+i)->paid_amount);
        printf("\nCustomer Balnce Amount:%.2f",(ptr+i)->balance_amount);
    }

    displayAllAmount(&c[0]);

    return 0; 
}