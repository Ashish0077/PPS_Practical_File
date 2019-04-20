/*QUES-9 : WAP that tells whether a given year is a leap year or not. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int year; //Declaration of Variables
	
	//Taking Input
	printf("Enter Year : ");
	scanf("%d", &year);
	
	//Checking if the year is Leap yr or not
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	    printf("%d is a Leap Year\n", year);
	else
	    printf("%d is not a Leap year\n", year);
		
	return 0;
}