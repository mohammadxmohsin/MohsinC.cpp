#include<stdio.h>

struct product
{
    int pid,qty;
    char pname[50];
    float price,amount;
};

void writeData(char *fname,struct product pr[])
{
    FILE *ptr;
    int i;
    ptr=fopen(fname,"wb");
    if(ptr==NULL)
    {
        printf("\nFile I/O Error!");
    }
    else
    {
        for(i=0;i<3;i++)
        {
            fwrite(&pr[i],sizeof(struct product),1,ptr);
        }
    }fclose(ptr);
}

void readData(char *fname)
{
    struct product px[5];
    int i;
    FILE *ptr;
    ptr=fopen(fname,"rb");
    if(ptr==NULL)
    {
        printf("\nFilr I/O Error!");
    }
    else
    {
        i=0;
        while(fread(&px[i],sizeof(struct product),1,ptr))
        {
            printf("\n%5d %20s %10.2f %10d %10.2f",px[i].pid,px[i].pname,px[i].price,px[i].qty,px[i].amount);
        }fclose(ptr);
    }
}

int main()
{
    struct product p[5];
    int i;
    /*
    printf("\nEnter Details of Product:");
    for(i=0;i<3;i++)
    {
        printf("\nEnter Product ID:");
        scanf("%d",&p[i].pid);
        printf("\nEnter Product Name:");
        scanf("%s",&p[i].pname);
        printf("\nEnter Product Quantity:");
        scanf("%d",&p[i].qty);
        printf("\nEnter Product Price:");
        scanf("%f",&p[i].price);

        p[i].amount=p[i].price*p[i].qty;
    }*/
    //writeData("alldata.txt",p);
    readData("alldata.txt");
    return 0;
}