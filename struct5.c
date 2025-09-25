#include<stdio.h>
#include<string.h>

int main()
{
    struct product
    {
        int pid,qty;
        float price,amount;
        char pname[50];
    };
    struct customer
    {
        int cid,pc;
        float total_amount,discount,after_discount;
        char cname[50],city[20];
        struct product p[10];
    }c[50];

    int i,j,cn;
    
    printf("\nEnter Number of customers: ");
    scanf("%d",&cn);
    printf("\nEnter Details of %d Customers:\n",cn);
    
    for(i=0;i<cn;i++)
    {
        printf("\nEnter Customer ID: ");
        scanf("%d",&c[i].cid);
        fflush(stdin);
        printf("\nEnter Customer Name: ");
        scanf("%s",&c[i].cname);
        fflush(stdin);
        printf("\nEnter Customer City: ");
        scanf("%s",&c[i].city);
        printf("\nEnter Number of Products: ");
        scanf("%d",&c[i].pc);

        printf("\nDetails of %d products:",c[i].pc);
        c[i].total_amount=0;
        for(j=0;j<c[i].pc;j++)
        {
            
            printf("\nEnter Product ID: ");
            scanf("%d",&c[i].p[j].pid);
            fflush(stdin);
            printf("\nEnter Product Name: ");
            scanf("%s",&c[i].p[j].pname);
            printf("\nEnter Product Price: ");
            scanf("%f",&c[i].p[j].price);
            printf("\nEnter Products Quantity: ");
            scanf("%d",&c[i].p[j].qty);
            c[i].p[j].amount=c[i].p[j].price*c[i].p[j].qty;
            c[i].total_amount+=c[i].p[j].amount;
        }
        if(c[i].total_amount>=25000)
        {
            c[i].discount=0.1*c[i].total_amount;
        }
        else
            c[i].discount=0.05*c[i].total_amount;

        c[i].after_discount=c[i].total_amount-c[i].discount;     
    }
    printf("\nAll Customer Data:\n");
    for(i=0;i<cn;i++)
    {
        printf("%d %s %s",c[i].cid,c[i].cname,c[i].city);
        printf("\nProduct Details:");
        for(j=0;j<c[i].pc;j++)
        {
            printf("%d %s %.2f %d %20.2f",c[i].p[j].pid,c[i].p[j].pname,c[i].p[j].price,c[i].p[j].qty,c[i].p[j].amount);
        }
        printf("\n Total =%.2ff",c[i].total_amount);
        printf("\n Discount =%.2ff",c[i].discount);
        printf("\n Net =%.2ff",c[i].after_discount);
    }
    return 0;
}
