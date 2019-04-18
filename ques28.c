/*QUES-28 : WAP to implement strlen (), strcat (),strcpy () using the concept of Functions.   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stringLength(char a[]);
void stringConcatenate(char a[], char b[]);
void stringCopy(char a[], char b[]);

int main(void)
{
    system("clear"); //clearing the screen

    int n;
	char strA[50], strC[50], strB[100]; //Array declared

    printf("Enter String A : ");
    fgets(strA, 50, stdin);

    //Printing the Menu
    printf("1. Find the Length Of String\n");
    printf("2. Copy the String to Another String\n");
    printf("3. Concatenate the string with Another String\n");
    printf("Choose(1-3) :\n");
    scanf("%d", &n);

    if(n == 2)
    {
        stringCopy(strA, strC);

        puts("STRING A = ");
        puts(strA);

        puts("\n");

        puts("Copied String = ");
        puts(strC);

    }

    else if(n == 1)
    {
        int len = stringLength(strA);
        printf("Length Of the String is : %d", len);
    }

    else if(n == 3)
    {
        // flushes the standard input
        // (clears the input buffer)
        while ((getchar()) != '\n');

        printf("Enter a String to be Concatenated : ");
        fgets(strB, 50, stdin);

        stringConcatenate(strA, strB);

        puts("String After Concatenation : ");
        puts(strA);

    }
    else
    {
        printf("Invalid Option\n");
    }
    return 0;
}

int stringLength(char a[]) //Gives The Length of the String
{
    int i;

    for(i = 0; a[i] != '\n'; i++);

    return i;
}
void stringConcatenate(char a[], char b[]) //contatenates the String B to String A
{
    int c = stringLength(a);

    for(int i = 0; b[i] != '\0'; i++)
    {
        a[c] = b[i];
        c++;
    }

    a[c] = '\0';
}

void stringCopy(char a[], char b[]) //Copies String A to String B
{
    int i;

    for(i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }

    b[i] = '\0';

}