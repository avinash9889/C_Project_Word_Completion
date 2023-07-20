#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char str[100];  //"str[100] is like buffer"
    char str1[100];
    int j;
    printf("enter the looking word:");
    scanf("%s",str1);
    fopen("main.txt","r");
    if(ptr==NULL){
        printf("file can't be open");
    }
    
    while(fgets(str,100,ptr)!=NULL)
    {
      int len=strlen(str);
      for(int i=0,j=0;i<len;i++,j++) {
        if(str1[i]=str[j]) {
            if(j==strlen(str1)){
            printf("sentence contains the word '%s: %s",str1,str);
            break;
            }
        }
      }
        
    }
    fclose(ptr);
    return 0;
}