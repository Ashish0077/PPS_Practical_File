/*QUES-14 : WAP to print sum of even and odd numbers from 1 to N numbers */

#include<stdlib.h>
#include<stdio.h>


int main(void)
{
    //Declaration of Variables
	int n, esum = 0, osum = 0;
    
    //Taking Input
	printf("Enter N : ");
	scanf("%d", &n);
    
    //Performing Sum of even and odd numbers from 1 to N numbers
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 == 0)
            esum += i;
        else
            osum += i;
    }
    
    //Printing Result
	printf("Sum of All Even Numbers : %d \nSum of All Odd Numbers : %d \n", esum, osum);

	return 0;
}