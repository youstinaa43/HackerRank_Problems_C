/*write a program to separate odd and even integers in separate arrays*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void Odd_Numbers(int arr[], int size);
void Even_Numbers(int arr[], int size);
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
    printf("=======The odd numbers are ========\n");
    Odd_Numbers(Numbers,size);
    printf("=======The odd numbers are ========\n");
    Even_Numbers(Numbers,size);

}

void Odd_Numbers(int arr[], int size)
{
    int iterator,odd_arr[size],counter=0;
    for(iterator=0;iterator<size;iterator++)
    {
        if(arr[iterator]%2!=0)
        {
             odd_arr[counter]=arr[iterator];
        counter++;
        }
    }
    print_array(odd_arr,counter);
}

void Even_Numbers(int arr[], int size)
{
    int iterator, even_arr[size],counter=0;
    for(iterator=0;iterator<size;iterator++)
    {
        if(arr[iterator]%2==0)
        {
             even_arr[counter]=arr[iterator];
             counter++;
        }
    }
    print_array(even_arr,counter);
}


void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

