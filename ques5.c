/*QUES-5 : WAP that swaps values of two variables using a third variable. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a, b; //Declaration of Variables
	
	//Taking Input
	printf("Enter Values : ");
	scanf("%d%d", &a, &b);
	
	//Printing Orignal Values
	system("clear");
	printf("Orignal Values\na : %d\nb = %d \n", a, b);
	
	/* Swapping the Variables */
	int temp = a;
	a = b;
	b = temp;
	
	//Printing After Swapping
	printf("\nValues Swapped\na : %d\nb = %d \n", a, b);
	
	return 0;
}
