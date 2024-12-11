/*write a program to print the values of array*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
int main (void)
{
    int size=0;
    int Numbers[MAX_SIZE];
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }while(Numbers[size++]!= -1&&size<=20);
    size--;
    printf("=======The numbers are ========\n");
    print_array(Numbers,size);

}

void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}


