/*
Price and quantity:
Conditional Operators:
*/
#include<stdio.h>
int main()
{
    int price,qty,amount,total_amount;
    float discount;

    printf("Enter price and quantity of pen: ");
    scanf("%d%d",&price,&qty);
    amount=price*qty;
    discount=(amount>=5000)?amount*0.1:amount*0.05;
    total_amount=amount-discount;
    printf("\n%d",total_amount);
    printf("\nThe Billing Statement is");
    printf("\n%10.2d%10.2d%10.2d%10.2f%10.2d",price,qty,amount,discount,total_amount);

    return 0;
}