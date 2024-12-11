/*write a program to get the sum of array using iterative and recursion*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void Sum_Numbers_iterative(int arr[], int size);
int Sum_Numbers_recursion(int arr[], int size);

int main (void)
{
    int size=0,sum=0;
    int Numbers[MAX_SIZE];
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }while(Numbers[size++]!= -1&&size<=20);
    size--;
  //printf("%d",size);
    printf("=======The Sum numbers using iterative is ========\n");
    Sum_Numbers_iterative(Numbers,size);
    printf("=======The Sum numbers using recursion is ========\n");
    sum=Sum_Numbers_recursion(Numbers,size);
    printf("The sum of these numbers is %d \n",sum);
}

void Sum_Numbers_iterative(int arr[], int size)
{
    int iterator,sum=0;
    for(iterator=0;iterator<size;iterator++)
    {
             sum+=arr[iterator];
    }
    printf("The sum of these numbers is %d \n",sum);
}

int Sum_Numbers_recursion(int arr[], int size)
{
    if (size==0)
        return 0;
    return arr[size-1]+Sum_Numbers_recursion(arr,size-1);

}


void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

