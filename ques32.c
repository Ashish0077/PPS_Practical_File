/* Ques32 -  WAP to check whether a given word exists in a file or not. If yes then find the number of times it
             occurs.  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf(":: Command Line Argument Missing ::\n Usage : ./ques32 filename.txt\n");
        exit(404);
    }
    FILE *file; //Declaration of file Pointer
    file = fopen(argv[1], "r");

    int counter = 0;
    char word[50]; //this is my word that is being searched
    printf("Enter The Word to be Searched : ");
    scanf("%s", word);

    if(!file) //file checking
    {
        printf("404 File Not Found.\n");
        exit(1);
    }

    char word1[50]; //for storing the word what i'm reading from the file

    int i = 0;
    while(!feof(file))
    {
        fscanf(file,"%s",word1);

        if(!strcmp(word1,word))//if match found increment num
            counter++;
    }

    if(counter == 0)
    {
        printf("Word Not Found");
    }

    else
    {
        printf("WORD FOUND! \nOccuring %d times\n", counter);
    }

    return 0;
}