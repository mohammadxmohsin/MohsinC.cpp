#include<stdio.h>
#include<string.h>

struct employee
{
    char ename[50];
    char egender[20];
    float salary;
    char skills[2][50];

}e[20];

void display(struct employee *ptr,int n)
{
    struct employee comp;
    int i,j=0;
    printf("\nMale Employees With Salary>10 LPA");
    for(i=0;i<n;i++)
    {  
        if(strcmp(e[i].egender,"Male")==0&&(e[i].salary>1000000))
        {
            printf("\nEmplyee Name=%s \t Emplyee Gender=%s \t Employee Salary=%.2f ",e[i].ename,e[i].egender,e[i].salary);
        
            for (j=0;j<2;j++)
            {
                printf("\nEnter Skill %d : %s ",j+1,e[i].skills[j]);
            } 
        } 
    }
}

int main()
{
    int i,j,n;
    printf("\nEnter Details Of Employees:\n");

    printf("\nEnter Number of Employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\nEnter Employee Name: ");
        scanf("%s",&e[i].ename);

        fflush(stdin);
        printf("\nEnter Employee Gender: ");
        scanf("%s",&e[i].egender);

        printf("\nEnter Employee Salary: ");
        scanf("%f",&e[i].salary);

        fflush(stdin);
        for (j = 0; j < 2; j++)
        {
            printf("\nEnter Skill %d: ", j + 1);
            scanf("%s", e[i].skills[j]);
        }     
    }
    display(e,n);

    
    return 0;
}