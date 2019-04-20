/*QUES-5 :  WAP that checks whether the two numbers entered by the user are equal or not */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a, b; //Declaration of Variables
	
	//Taking Input
	printf("Enter Values : ");
	scanf("%d%d", &a, &b);
	
	//Checking Equality
	if(a == b)
	    printf("Both the Numbers are Equal\n");
	else
		printf("Not Equal\n");
		
	return 0;
}