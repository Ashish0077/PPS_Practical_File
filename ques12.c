/*QUES-1 :  WAP to print the sum of all numbers up to a given number. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    //Declaration of Variables
	int n, sum = 0;
    
    //Taking Input
	printf("Enter N : ");
	scanf("%d", &n);
    
    //Performing Sum of all Numbers till n
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    //Printing SUM
	printf("SUM : %d", sum);

	return 0;
}