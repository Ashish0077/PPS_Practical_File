/*QUES-23 :  WAP to find the minimum and maximum element of the array */

#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    system("clear"); //clearing the screen

    int min, max;
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
	
	//Giving Inital Values
	min = arr[0];
	max = arr[0];

	for(int i = 0; i < size; i++)
	{
	    if (min > arr[i])
		{
		    min = arr[i];
		}

		if (max < arr[i])
		{
		    max = arr[i];
		}
	}
	
	//printing sum
    printf("Minimum Element : %d\nMaximum Element : %d\n", min, max);

	return 0;
}