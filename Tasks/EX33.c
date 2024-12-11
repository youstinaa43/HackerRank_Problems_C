/*write a program to get the max number of the arrays*/
#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void Max_Numbers(int arr[], int size);
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
    printf("=======The Max number is ========\n");
    Max_Numbers(Numbers,size);


}

void Max_Numbers(int arr[], int size)
{
    int iterator,max=INT_MIN;
    for(iterator=0;iterator<size;iterator++)
    {
        if(arr[iterator]>max)
        {
             max=arr[iterator];
        }
    }
    printf("\nThe max number of these numbers is %d\n",max);
}




void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

