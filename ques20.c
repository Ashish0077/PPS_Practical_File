/*Ques20 - WAP to convert binary number into decimal number and vice versa. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Prototype of the Fuctions
void decToBin(int);
int binToDec(int);

int main(void)
{
    int n, a; //Declaration of Variables

    system("clear"); //Clears the Screen

    //Printing the Menu
    printf("1. Binary to Decimal Conversion\n");
    printf("2. Decimal to Bianry Conversion\n");
    printf("Choose(1-2) :\n");

    //Taking Input
    scanf("%d", &a);

    //procedure for option 1
    if(a == 1)
    {
        //Taking input
        printf("Enter a Binary Number : ");
        scanf("%d", &n);
        printf("\nDecimal Number : %d\n", binToDec(n));
    }
    //procedure for option 1
    else if(a == 2)
    {
        //taking input
        printf("Enter a Decimal Number : ");
        scanf("%d", &n);
        decToBin(n);
    }
    //Invalid
    else
    {
        printf("Invalid option\n");
        exit(1);
    }
    return 0;

}

void decToBin(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;

    while(n > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    printf("Binary Number : ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);

    printf("\n");

}

int binToDec(int n)
{
    int r, dec = 0, counter = 0; //Declaration of Variables

    //Calculating Decimal Number
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        dec += (r * pow(2,counter));
        counter++;
    }

    return dec; //Returning Decimal Number

}