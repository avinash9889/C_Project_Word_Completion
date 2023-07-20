#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *ptr;
    char str[100];
    char str1[100];
    printf("Enter the word to match: ");
    gets(str1);
    ptr = fopen("main.txt", "r");
    if(ptr == NULL){
        printf("file can't be open");
    }
    while (fgets(str, 100, ptr) != NULL) 
    {
        if (strncmp(str, str1, strlen(str1)) == 0) 
        {
            printf("Line starts with the word '%s': %s", str1, str);
        }

    }
    fclose(ptr);
    return 0;
}