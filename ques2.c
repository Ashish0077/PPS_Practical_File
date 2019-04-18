/*QUES-2 : WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate
 of Interest and Time are entered through the keyboard.  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float p, r, t; //Declaration of Variables

    //Taking Input
	printf("Enter the value of Principle : ");
	scanf("%f", &p);

	printf("Enter the value of Rate : ");
	scanf("%f", &r);

	printf("Enter the value of Time : ");
	scanf("%f", &t);

	/* Calculating simple interest */
  	float SI = (p * t * r) / 100;
	
	/* Calculating Compound interest */
  	float CI = p * (pow((1 + r / 100), t));
	
	//Printing SI & CI
	printf("\nSimple Interest = %.3f\nCompound Interest = %.2f \n", SI, CI);

	return 0;
}
