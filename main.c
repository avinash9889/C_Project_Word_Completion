#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
    FILE *ptr;
    ptr = fopen("main.txt", "w");
    if(ptr==NULL)
    {
        printf("file cant be open \n");
    }
    fprintf(ptr, "This is a string.\nAnother line with the string.\nJust a simple line.");
    fclose(ptr);
    return 0;
}