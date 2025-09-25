#include<stdio.h>
#include<string.h>
float average(int a[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    return sum/5.0;

}
int main()
{
    int x[5]={10,20,30,40,50};
    float avg;
    avg=average(x);
    printf("\nAverage is:%.2f",avg);

    return 0;
}