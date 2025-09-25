#include<stdio.h>
int main()
{
    struct Book
    {
        int bookid;
        char bookname[100],author[50];
        float price,amount;
        int qty;
    } b1;

    printf("\n Enter details of a Book:");
    printf("\n Enter book id, book name, author, price and qty: ");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    scanf("%s",&b1.bookname);
    scanf("%s",&b1.author);
    scanf("%f",&b1.price);
    scanf("%d",&b1.qty);
    printf("\n Book Details are as follows:");
    printf("\n %10d %30s %30s",b1.bookid,b1.bookname,b1.author);
    printf("\n The Amount = %.2f",b1.price*b1.qty);

    return 0;
}