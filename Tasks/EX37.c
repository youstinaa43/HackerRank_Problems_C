/*write a program to sort unsorted array using bubble sort algorithm*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void bubble_sort(int a[],int size);
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
    printf("=======The unsorted numbers are ========\n");
    print_array(Numbers,size);

    printf("=======The sorted numbers are ========\n");
    bubble_sort(Numbers,size);

}

void bubble_sort(int a[],int size)
{
    int sorted,temp,iterator;
    do
    {
        sorted=1;
        for(iterator=0;iterator<size-1;iterator++)
        {
            if (a[iterator]>a[iterator+1])
            {
                sorted=0;
                temp=a[iterator];
                a[iterator]=a[iterator+1];
                a[iterator+1]=temp;
            }


        }
    }while(!sorted);
    print_array(a,size);
}


void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

