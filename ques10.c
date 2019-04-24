/*QUES-10 : WAP that accepts marks of five subjects and finds percentage and prints grades according to the
            following criteria:

            Between 90-100%--------------Print A
                    80-90%---------------Print B
                    60-80%---------------Print C
            Below   60%------------------Print D */

#include<stdlib.h>
#include<stdio.h>

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
	
	//Calculating Percentage
	//Assuming Marks are out of 100 per subject
	float percentage = (float) ((sum / 500) * 100);
	
	//Printing Grades according to the percentage
	if(percentage >= 90)
	    printf("Grade : A\n");

	else if (percentage >= 80 && percentage < 90)
	    printf("Grade : B\n");

	else if (percentage >= 60 && percentage < 80)
	    printf("Grade : C\n");

	else
	    printf("Grade : D\n");

	return 0;
}