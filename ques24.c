/*QUES-24 : WAP to search an element in a array using Linear Search */

#include<stdlib.h>
#include<stdio.h>

int linearSearch(int n, int arr[], int size);

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

	//taking Input for the Element to be Searched
	printf("Enter the Element to be Searched : ");
	scanf("%d", &n);
	
	int loc = linearSearch(n, arr, size); //Calling Linear Search Function
	
	if(loc)
	{
	    printf("Element Found at Location : %d\n", loc);
	}
	else
	{
	    printf("Not Found\n");
	}

	return 0;
}

int linearSearch(int n, int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        //Comparing each element of array with the Number to be Searched
        if (n == arr[i])
        {
            return i+1;
        }
    }

    return 0;
}

