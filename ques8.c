/*QUES-8 : WAP that finds whether a given number is even or odd. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a; //Declaration of Variables
	
	//Taking Input
	printf("Enter a Number : ");
	scanf("%d", &a);
	
	//Checking if the number is Even or Odd
	if(a % 2 == 0)
		printf("%d is an Even Number\n", a);
	else
		printf("%d is and Odd Number\n", a);
		
	return 0;
}