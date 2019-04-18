/*QUES-25 : WAP to sort the elements of the array in ascending order using Bubble Sort technique. */

#include<stdlib.h>
#include<stdio.h>

void bubbleSort(int arr[], int size);

int main(void)
{
    system("clear"); //clearing the screen

    int n; //element to be searched
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

		system("clear"); //clearing the screen
	}

	printf("Orignal ARRAY : ");
	for (int i = 0; i <size; i++)
	{
        printf("%d ", arr[i]);
	}

	bubbleSort(arr, size); //Calling Bubble Sort Function

	//Printing sorted Array
	printf("\n\nAfter Performing Bubble Sort: ");
	printf("\nSorted Array : ");
	for (int i = 0; i <size; i++)
	{
        printf("%d ", arr[i]);
	}


    printf("\n");
	return 0;
}

void bubbleSort(int arr[], int size)
{
    for(int pass = 1; pass <= size; pass++) //No fo passes
    {
        for(int i = 0; i < (size - pass) ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

