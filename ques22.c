/*QUES-22 :  WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array
             and prints them */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    system("clear"); //clearing the screen

    int sum = 0;
    int size; //Size of array

    //Taking Input for size
    printf("Enter the size of Arrays : ");
    scanf("%d", &size);

    system("clear"); //clearing the screen

	int arr1[size], arr2[size]; //Array declared
    int sumArr[size]; //Array for Storing Sum of corresponding elements

    for(int i = 0; i < 2; i++)
    {
        printf("\nEnter Elements for Array %d\n", i + 1);

        //taking Input
    	for (int j = 0; j < size; j++)
    	{
            if(i == 0) //Taking Input for array 1
            {
        		printf("Enter Element %d : ", j + 1);
        		scanf("%d", &arr1[j]);
            }

            else //taking input for array 2
            {
        		printf("Enter Element %d : ", j + 1);
        		scanf("%d", &arr2[j]);
            }

    	}
    }

    printf("\nSum Array : \n");
    //Calculating Sum and storing it in Third Array
    for(int i = 0; i < size; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];

        printf("%d ", sumArr[i]);

    }

    printf("\n");

	return 0;
}