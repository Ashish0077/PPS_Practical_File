/*QUES-16 : WAP to check whether the entered number is prime or not.  */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    //Declaration of Variables
	int n, flag = 1;

	//Taking Input
	printf("Enter N : ");
	scanf("%d", &n);

    //Checking if the Number is Prime or not
    for(int i = 2; i < n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    //printing results
    if(flag == 1)
        printf("Number is Prime\n");
    else
        printf("Number is not Prime\n")

	return 0;
}