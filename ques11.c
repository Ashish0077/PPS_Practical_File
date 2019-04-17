/*QUES-11 : WAP that takes two operands and one operator from the user and perform the operation and prints
the result by using Switch statement. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    //Declaration of Variables
	char op;
	float a, b, res;

	//Taking Input (equation)
	printf("Enter Equation in form of \"a (operand) b\" : ");
	scanf("%f %c %f", &a, &op, &b);
    system("clear");

    //Performing Operations
    if(op == '+')
        res = a + b;

    else if(op == '-')
        res = a - b;

    else if(op == '*')
        res = a * b;

    else if(op == '/')
        res = a / b;

    else if(op == '%')
        res =(int)a % (int)b;

    else
    {
        printf("Invalid Equation \n");
        exit(1);
    }

    //Printing Result
	printf("\n%.2f %c %.2f = %.2f\n", a, op, b, res);

	return 0;
}