/*QUES-17 : WAP to find the sum of digits of the entered number. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    //Declaration of Variables
	int n, sum = 0, r;
    
    //Taking Input
	printf("Enter N : ");
	scanf("%d", &n);
    
    //Calculating the sum of
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r;
    }
    
    //printing results
    printf("SUM : %d\n", sum);

	return 0;
}