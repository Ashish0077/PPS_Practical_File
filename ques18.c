/*QUES-18 : WAP to find the reverse of a number. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    //Declaration of Variables
	int n, rev = 0, r;

	//Taking Input
	printf("Enter Number : ");
	scanf("%d", &n);

    //Reversing the Number
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (10 * rev) + r;
    }

    //printing results
    printf("Reverse : %d\n", rev);

	return 0;
}