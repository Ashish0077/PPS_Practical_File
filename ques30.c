/* Ques30 - WAP to swap two elements using the concept of pointers. */

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b); //prototype of the function

int main()
{
    int a, b; //Declartion of Variables

    //Taking Input
    printf("Enter Values : ");
    scanf("%d%d", &a, &b);
    system("clear");

    printf("Values Before Swapping a = %d , b = %d \n", a, b);

    //Swaping passed The Value by Call By Reference
    swap(&a, &b);

    //Printing Swapped Values
    printf("Values After Swapping a = %d , b = %d \n", a, b);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}
