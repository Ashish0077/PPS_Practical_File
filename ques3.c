/*QUES-3 :  WAP to calculate the area and circumference of a circle  */

#include<stdio.h>
#define PI 3.14

int main(void)
{
	float r; //Declaration of Variables

    	//Taking Input
	printf("Enter the Radius : ");
	scanf("%f", &r);

	/* Calculating Area of Circle */
	float area = (float) (PI*r*r);

    	/* Calculating Circumference */
    	float circumference = (float) 2*PI*r;

    	//Printing SI & CI
	printf("AREA : %.3f\nCIRCUMFERENCE = %.3f \n", area, circumference);

	return 0;
}
