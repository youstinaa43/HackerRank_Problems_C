/*write a program to find reverse of array*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void reverseArray(int arr[],int size);
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
    printf("=======The reversed array numbers are ========\n");
    reverseArray(Numbers, size);

}
void reverseArray(int arr[],int size)
{
    int i,counter=size;
    int reversearr[size];
    for(i=0;i<=counter;i++)
    {
        reversearr[i]=arr[size-1];
        size--;
    }

    for(i=0;i<counter;i++)
    {
        arr[i]=reversearr[i];
    }
    print_array(arr,counter);


}
void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}
