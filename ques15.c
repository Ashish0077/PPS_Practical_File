/*QUES-15 : WAP to print the Fibonacci series. */

#include<stdlib.h>
#include<stdio.h>

int fib(int n); //Prototype of the function

int main(void)
{
    //Declaration of Variables
	int n;
    
    //Taking Input
	printf("Enter N : ");
	scanf("%d", &n);
    
    //Printing Fibbonacci series
    for(int i = 0; i < n; i++)
        printf("%d ", fib(i));

	return 0;
}

int fib(int n)
{
    if(n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);

}