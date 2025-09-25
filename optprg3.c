#include<stdio.h>
int main()
{
    int english,maths,science,marks;
    printf("Marks in English is: ");
    scanf("%d",&english);
    printf("Marks in maths is: ");
    scanf("%d",&maths);
    printf("Marks in science is: ");
    scanf("%d",&science);
    (english<35||maths<35||science<35)?printf("\nFAIL"):printf("\nPASS");
    


    return 0;
}