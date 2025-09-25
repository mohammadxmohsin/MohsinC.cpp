/*Conditional Statement Program:
Write a program to Read product name,price,quantity

*/
#include<stdio.h>
int main()
{
    int price,qty;
    float amount,discount,final_amount;
    char pname[50];
    printf("Enter Product Name: ");
    scanf("%s",&pname);
    printf("\nEnter Price and Quantity of Product: ");
    scanf("%d%d",&price,&qty);
    amount=price*qty;
    if(amount>=10000)
    {
        discount=amount*0.1;
    }
    else if(amount>=5000)
    {
        discount=amount*0.05;
    }
    else if(amount>=2000)
    {
        discount=amount*0.02;
    }
    else 
    {
        discount=100;
    }
    final_amount=amount-discount;
    printf("\nBilling Statement:");
    printf("\nProduct Name is:%s",pname);
    printf("\nPrice=%d  Quantity=%-10d",price,qty);
    printf("\nAmount=%.2f",amount);
    printf("\nDiscount=%.2f",discount);
    printf("\nFinal Amount=%.2f",final_amount);

    return 0;
}