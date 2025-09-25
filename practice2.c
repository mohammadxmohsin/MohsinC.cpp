//Read distance in km and convert it into meter,cm,mm ,miles and inches
#include<stdio.h>

int main()
{
    float km,m,cm,mm,miles,inches;
    printf("Enter the Distance in kilomater: ");
    scanf("%f",&km);
    m=km*1000;
    printf("\nDistance in meter is:%10.2f",m);
    cm=km*100000;
    printf("\nDistance in centimeter is:%10.3f",cm);
    mm=km*1000000;
    printf("\nDistance in millimeter is:%10.3f",mm);
    miles=km*0.621371;
    printf("\nDistance in miles is:%10.3f",miles);
    inches=km*39370.1;
    printf("\nDistance in inches is:%10.3f",inches);

    return 0;
}