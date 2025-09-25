#include<stdio.h>

int main()
{
	int age;
	float weight;
	char name;
	
	printf("Enter your age = ");
	scanf("%dage= ",&age);
	printf("Enter your weight = ");
	scanf("\n%fweight= ",&weight);
	printf("Enter your Name = ");
	fflush(stdin);
	scanf("\n%char= ",&name);
	
	printf("age=%d",age);
	printf("\nage=%i",age);
	printf("\nage=%u",age);
	printf("\nage=%ld",age);
	printf("\nage=%x",age);
	printf("\nage=%o",age);
	printf("\nage=%c",age);
	
	printf("\nweight=%f",weight);
	printf("\nweight=%e",weight);
	
	printf("\nchar=%c",name);
	printf("\nchar=%d",name);
	
	
	return 0;
	
}