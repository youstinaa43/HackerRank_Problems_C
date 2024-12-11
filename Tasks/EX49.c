/*write a program in c to find reverse of a string using pointers*/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
int get_length(char *ptr);
void print_string(char a[], int size);
int main(void)
{
    char *ptr1, *ptr2;
    char string1[MAX_SIZE],string2[MAX_SIZE];
    int size1=0,iterator,temp;
    ptr1=&string1;
    ptr2=&string2;
    printf("Please enter a string : ");
    fflush(stdin);
    gets(string1);
    size1=get_length(string1);
    printf("\n=============The unreversed string==================\n");
    print_string(string1,size1);
    temp=size1;
    for(iterator=0;iterator<=temp;iterator++)
    {
        *(ptr2+iterator)=*(ptr1+size1-1);
        size1--;

    }
    *(ptr2+size1)='\0';

    printf("=============The reversed string==================\n");
    print_string(string2,temp);
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


