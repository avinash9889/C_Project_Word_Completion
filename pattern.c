#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *ptr;
	char str[100];
    char str1[100];
	printf("enter the string");
	gets(str1);
	ptr = fopen("main.txt", "a+");
	if (NULL == ptr) {
		printf("file can't be opened \n");
	}


	while (fgets(str, 100, ptr) != NULL) 
	{
		if(strstr(str,str1)!=NULL)
        {
			printf(" line contains thw word'%s':%s ",str1,str);

		}
	}

	fclose(ptr);
	return 0;
}

