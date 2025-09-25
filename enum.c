#include<stdio.h>
int main()
{
    enum months{jan=31,feb=28,mar=31,apr=30,may=31};
    enum months m1=feb;
    printf("%d",m1);

    /*enum days{sunday,Monday,Tuesday,wednesday,Thursday,Friday,Saturaday};
    enum days d1=Tuesday;
    printf("%d",d1);*/
    
    return 0;
}