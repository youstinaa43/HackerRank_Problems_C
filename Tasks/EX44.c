/*write a program in c to calculate the length of the string using a pointer*/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
int main(void)
{
    char Strings[MAX_SIZE];
    int size=0;
    char *ptr=Strings;
    printf("Please enter a string\n");
    fflush(stdin);
    gets(Strings);
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }

    printf("==================the size of string =========================\n");
        printf("the size of string is %d\n",size);


    return 0;
}

