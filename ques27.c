/*QUES-27 : WAP that finds the sum of diagonal elements of a mxn matrix.  */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int r, c, sum = 0; //Declaration of Variables
    
    //Taking Input for Rows and Columns
    printf("Enter The No. Of Rows And columns (R * C):\n");

    printf("Row: ");
    scanf("%d", &r);

    printf("Column: ");
    scanf("%d", &c);

    system("clear");

    int mat1[r][c];  //Declaration of Matrix
    
    //Taking Input for Values of matrix
    for(int i = 0; i < r; i++)  //keeping Track of Rows
    {
        for(int j = 0; j < c; j++) //keeping Track of Columns
        {
            printf("location (%d,%d)", i, j);
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    
    //Calculating the Sum of Diagonal
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(j == i)
            {
                sum += mat1[i][j];
            }
        }
    }

    printf("SUM of Diagonal : %d\n", sum);

    return 0;
}
