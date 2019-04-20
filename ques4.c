/*QUES-4 :  WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula
            C/5=(F-32)/9.  */

#include<stdio.h>

int main(void)
{
	float c; //Declaration of Variables
	
	//Taking Input
	printf("Enter the Temperature(°C) : ");
	scanf("%f", &c);
	
	/* Converting into Fahrenheit */
	float f = (float) (9*(c/5)+32);
	
	//Printing  Temperature in Fahrenheit
	printf("Fahrenheit : %.3f °F\n", f);
	
	return 0;
}
