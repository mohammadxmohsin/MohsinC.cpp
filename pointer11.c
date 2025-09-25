#include<stdio.h>
void display()
{
    printf("\nInside Display Function");
}

int main()
{
    void(*ptr)(void);
    ptr=display;

    ptr();
    printf("\nInside Main Function");

    return 0;
}