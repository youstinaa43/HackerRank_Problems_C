/*write a program in c to concatenate two strings using pointers*/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
#define Total_SIZE 40
int get_length(char *ptr);
void print_string(char a[], int size);
int main(void)
{
    char *ptr1, *ptr2, *ptr3;
    char string1[MAX_SIZE],string2[MAX_SIZE],string3[Total_SIZE];
    int size1=0,size2=0,iterator,counter=0;
    ptr1=&string1;
    ptr2=&string2;
    ptr3=&string3;
    printf("Please enter the first string : ");
    fflush(stdin);
    gets(string1);
    printf("\nPlease enter the second string : ");
    fflush(stdin);
    gets(string2);
    size1=get_length(string1);
    size2=get_length(string2);
    for(iterator=0;iterator<size1;iterator++)
    {
        *(ptr3+iterator)=*(ptr1+iterator);
    }
    *(ptr3 + size1 ) = ' ';
    for(iterator=size1+1;iterator<=size1+size2;iterator++)
    {
        *(ptr3+iterator)=*(ptr2+counter);
        counter++;
    }
    *(ptr3 + size1 + size2+1) = '\0';
    printf("\nThe concatenated string is: ");

    print_string(string3,size1 + size2+1);
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
