/*QUES-21 : WAP that simply takes elements of the array from the user and finds the sum of these elements. */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    system("clear"); //clearing the screen

    int sum = 0;
    int size; //Size of array
    
    //Taking Input for size
    printf("Enter the size of array : ");
    scanf("%d", &size);
    
    int arr[size]; //Array declared

	for (int i = 0; i <size; i++)
	{
        //Taking Input array elements
		printf("Enter Element %d : ", i + 1);
		scanf("%d", &arr[i]);

		sum += arr[i]; //Calculating the Sum of Elements

		system("clear"); //clearing the screen
	}
    
    //printing sum
    printf("SUM : %d\n", sum);

	return 0;
}