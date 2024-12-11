/*write a program to merge two arrays in third array*/
#include<stdio.h>
#define MAX_SIZE1 20
#define MAX_SIZE2 40

void print_array(int a[],int size);
int main (void)
{
    int size1=0,size2=0;
    int Numbers1[MAX_SIZE1],Numbers2[MAX_SIZE1];
    printf("Please enter numbers of first array up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size1+1);
        scanf("%d",&Numbers1[size1]);
    }while(Numbers1[size1++]!= -1&&size1<=20);
    size1--;
    printf("======================================================\n");
    printf("Please enter numbers of second array up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size2+1);
        scanf("%d",&Numbers2[size2]);
    }while(Numbers2[size2++]!= -1&&size2<=20);
    size2--;

    printf("=======The merged array is ========\n");
    marge_array(Numbers1,size1,Numbers2,size2);

}

void marge_array(int arr1[],int size1, int arr2[], int size2)
{
    int totalsize=size1+size2;
    int arr3[totalsize];
    int iterator,counter=0,co=0;
    for(iterator=0;iterator<size1;iterator++)
    {
        arr3[counter]=arr1[iterator];
        counter++;
    }
    printf("==%d==\n",counter);

    for(iterator=counter;iterator<totalsize;iterator++)
    {
        arr3[counter]=arr2[co];
        counter++;
        co++;
    }

    print_array(arr3,totalsize);
}


void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}


