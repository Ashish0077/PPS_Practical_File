/*QUES-1 : WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
 by the student. */

#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	float marks[5]; //array for accepting marks
	float sum = 0;

	//Taking Input
	for (int i = 0; i < 5; i++)
	{
		printf("Enter Marks of Subject %d : ", i + 1);
		scanf("%f", &marks[i]);
		sum += marks[i]; //Calculating sum
		system("clear"); //clearing the screen
	}

	//Assuming Marks are out of 100 per subject
	float percentage = (float) ((sum / 500) * 100);

    //Printing the Total Sum and Percentage
	printf("Sum = %.2f\nPercentage = %.2f \n", sum, percentage);

	return 0;
}
