//Use of 'fprintf' and 'fscanf':
#include<stdio.h>
int main()
{
    int cid,i;
    char cname[25];
    float amount;
    FILE *ptr;
    ptr=fopen("customer.txt","w");
    if(ptr==NULL)
    {
        printf("\nFile I/O Error!");
    }
    else 
    {
        for(i=0;i<3;i++)
        {
            printf("\nEnter Customer Id: ");
            scanf("%d",&cid);
            fflush(stdin);
            printf("\nEnter Customer Name: ");
            scanf("%s",&cname);
            printf("\nEnter Amount: ");
            scanf("%f",&amount);

            fprintf(ptr,"%d %s %.2f\n",cid,cname,amount);
        }
    }fclose(ptr);
    
   /*else
   {
    while(fscanf(ptr,"%d %s %f",&cid,&cname,&amount)!=EOF)
    {
        printf("\nCustomer Id:%d",cid);
        printf("\nCustomer Name:%s",cname);
        printf("\nAmount:%.2f",amount);
    }
   }fclose(ptr);
   */
    


    return 0;
}