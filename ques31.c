/* Ques31 - WAP to compare the contents of two files and determine whether they are same or not.  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file1, *file2;  //Declaration of file Pointer

    file1 = fopen("new.txt", "r");

    file2 = fopen("new1.txt", "r");

    if(!file1 || !file2)
    {
        printf("404 File Not Found.\n");
        exit(1);
    }
    
    //Calculating the Size of file 1
    int size1 = 0;
    while(!feof(file1))
    {
        size1++;
        fgetc(file1);
    }
    
    //Calculating the Size of file 2
    int size2 = 0;
    while(!feof(file2))
    {
        size2++;
        fgetc(file2);
    }

    if(size1 == size2)
    {
        int flag = 1;
        while(!feof(file1))
        {
            if( fgetc(file1) != fgetc(file2) )
            {
                printf("Not Equal\n");
                exit(2);
            }
        }
        if(flag == 1)
            printf("Both the Files are Same\n");
    }
    else
        printf("Files are Not Same\n");

    return 0;
}