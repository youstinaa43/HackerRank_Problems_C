/*write a program in c to compare two strings using pointers*/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
int get_length(char *ptr);
void print_string(char a[], int size);
int main(void)
{
    char *ptr1, *ptr2;
    char string1[MAX_SIZE],string2[MAX_SIZE];
    int size1=0,size2=0,iterator,compare=0;
    ptr1=&string1;
    ptr2=&string2;
    printf("Please enter the first string : ");
    fflush(stdin);
    gets(string1);
    printf("\nPlease enter the second string : ");
    fflush(stdin);
    gets(string2);
    size1=get_length(string1);
    size2=get_length(string2);
    for(iterator=0;iterator < size1 && iterator < size2;iterator++)
    {
        if(*(ptr1+iterator)>*(ptr2+iterator))
             {
                 compare=1;
                 break;
             }
        else if(*(ptr1+iterator)<*(ptr2+iterator))
             {
                 compare=-1;
                 break;
             }
        else if(*(ptr1+iterator)=*(ptr2+iterator))
             compare=0;

    }

    if (compare==1)
        printf("%s is big than %s",string1,string2);
    else if (compare==-1)
        printf("%s is small than %s",string1,string2);
    if (compare==0)
        printf("%s is equal to %s",string1,string2);
    return 0;
}


int get_length(char *ptr)
{
    int size=0;
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }
    return size;
}

void print_string(char a[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%c", a[i]); // Print each character
    }
    printf("\n");
}

