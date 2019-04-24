/*QUES-19 : WAP to print Armstrong numbers from 1 to 100. */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int armstrong(int n); //Prototype for the Function

int main(void)
{
    //Printing Output
    printf("Armstrong numbers from 1 to 100 are :\n");

    for(int i = 1; i <= 100; i++)
    {
        int n = armstrong(i);

        if(n)
        {
            printf("%d\n", n);
        }


    }
	return 0;
}

int armstrong(int n)
{
    //Declaration of Variables
    int digits = 0, arm = 0, r;
    
    //Making Two copies of the Number
    int n1 = n, n2 = n;
    
    //Calculating the No. Of Digits
    while(n > 0)
    {
        n = n / 10;
        digits++;
    }
    
    //Checking if the Number is Armstrong or not
    while(n2 > 0)
    {
        r = n2 % 10;
        n2 = n2 / 10;
        arm += pow(r,digits);
    }
    
    //Returning number or False
    if(arm == n1)
        return n1; //Number

    else
        return 0; //False

}
