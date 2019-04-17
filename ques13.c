/*QUES-13 :  WAP to find the factorial of a given number */

#include<stdlib.h>
#include<stdio.h>

int fact(int n); //Prototype of the function

int main(void)
{
    //Declaration of Variables
	int n, res;

	//Taking Input
	printf("Enter N : ");
	scanf("%d", &n);

    //calling factorial function
    res = fact(n);

    //Printing Result
	printf("Factorial of %d is : %d \n", n, res);

	return 0;
}

int fact(int n)
{
    if(n <= 1)
        return 1;

    return n * fact(n - 1);
}