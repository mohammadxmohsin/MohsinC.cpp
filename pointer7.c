#include<stdio.h>
#include<string.h>

struct consumer
{
    int unit,cid;
    char con_name[50],city[50];
    float amount;
}c[30];

void displayall(struct consumer *ptr,int n)
{
    int i;
    float total=0;
    for(i=0;i<n;i++)
    {
        printf("\nConsumer Id=%d \t City=%s \t Units=%d \t Amount=%.2f",c[i].cid,c[i].city,c[i].unit,c[i].amount);
        total+=c[i].amount;
    }  
    printf("\nTotal Amount = %.2f",total);     
}

void sortdata(struct consumer *ptr,int n)
{
    struct consumer temp;
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ptr[i].amount>ptr[j].amount)
                {
                   temp=ptr[i];
                   ptr[i]=ptr[j];
                   ptr[j]=temp;
                }
            }
        }
    };   
}

void billamount(struct consumer *ptr, int n)
{
    int i;
    printf("\nConsumers with bill amount >= 2000:\n");
    for(i = 0; i < n; i++)
    {
        if(ptr[i].amount >= 2000)
        {
            printf("Consumer ID: %d \t Name: %s \t City: %s \t Units: %d \t Amount: %.2f\n",
                   ptr[i].cid, ptr[i].con_name, ptr[i].city,
                   ptr[i].unit, ptr[i].amount);
        }
    }
}

void alpha(struct consumer *ptr,int n)
{
    struct consumer comp;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(ptr[i].con_name,ptr[j].con_name)>0)
            {
                comp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=comp;
            }
        }
    }
}

int main()
{
    int n,i;
    printf("\nEnter The Number of Consumers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Consumer ID: ");
        scanf("%d",&c[i].cid);
        printf("\nEnter Consumer Name: ");
        scanf("%s",&c[i].con_name);
        printf("\nEnter Consumer City: ");
        scanf("%s",&c[i].city);
        printf("\nEnter Consumer Unit: ");
        scanf("%d",&c[i].unit);

        c[i].amount=150;
        if(c[i].unit<=200)
        {
            c[i].amount+=(c[i].unit)*2;
        }
        else if(c[i].unit<=400)
        {
            c[i].amount+=400+(c[i].unit-200)*4;
        }
        else if(c[i].unit<=600)
        {
            c[i].amount+=400+800+(c[i].unit-400)*6;
        }
        else
        c[i].amount+=400+800+1200+(c[i].unit-600)*8;
    }
    sortdata(&c[0],n);
    displayall(&c[0],n);
    billamount(&c[0],n);
    alpha(&c[0],n);
    displayall(&c[0],n);

    return 0;
}