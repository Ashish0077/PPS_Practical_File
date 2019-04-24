/*QUES-26 : WAP to add and multiply two matrices of order nxn.  */

#include<stdio.h>
#include<stdlib.h>

int c[2], r[2]; //Arrays for storing the no. of Columns and Rows

void multiply(int a[r[0]][c[0]], int b[r[1]][c[1]]); //protoype for the function

int main(void)
{
    printf("Enter The No. Of Rows And columns (R * C) for Both The Matrices:\n");

    for(int i = 0; i < 2; i++) //Loop For taking the Input
    {
        printf("\nEnter Rows and Columns For Matrix %d \n", i + 1);

        printf("Row: ");
        scanf("%d", &r[i]);

        printf("Column: ");
        scanf("%d", &c[i]);

        system("clear");
    }

    if(c[0] != r[1])
        printf("Multiplication Not Possible ! \n");

    else
    {
        int mat1[r[0]][c[0]], mat2[r[1]][c[1]];  //Declaration of Matrices
        
        //Taking Input for Values of matrix

        for(int i = 0; i < 2; i++)  //Keeping Track For Which matrix we are inputing value
        {
            printf("\nEnter Elements for Matrix %d\n", i+1);
            for(int j = 0; j < r[i]; j++) //for Rows
            {
                for(int k = 0; k < c[i]; k++) //for Columns
                {
                    if (i == 0) //Matrix 1
                    {   printf("location (%d,%d)",j,k);
                        scanf("%d", &mat1[j][k]);
                    }
                    else //Matrix 2
                    {
                        printf("location (%d,%d)",j,k);
                        scanf("%d", &mat2[j][k]);
                    }

                }
                printf("\n");
            }

        }

        multiply(mat1, mat2);


    }



}

void multiply(int a[r[0]][c[0]], int b[r[1]][c[1]]) //defination of the function
{

        for(int i = 0; i < r[0]; i++) //For the Row of mat1
        {
            for(int j = 0; j < c[0]; j++) //For the column of mat1 and row of Mat2
            {
                int sum = 0;
                for(int k = 0; k < c[1]; k++) //For the Column of mat2
                {
                   sum += (a[i][k] * b[k][j]);
                }
                printf("%d ", sum);
            }
            printf("\n");
        }

}