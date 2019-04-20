/*QUES-7 : WAP to find the greatest of three numbers */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a, b, c; //Declaration of Variables
	
	//Taking Input
	printf("Enter Values : ");
	scanf("%d%d%d", &a, &b, &c);
	
	//Checking Equality
	int max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
	
	//output
	printf("Greatest Number is : %d\n", max);
	
	return 0;
}