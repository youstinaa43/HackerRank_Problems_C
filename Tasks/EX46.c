/*write a program in c to store n elements in dynamic array and get the max elements using pointer*/
#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(void)
{

    int *ptr;
    int iterator;
    int number,Max=INT_MIN;
    printf("Please enter the number of elements : ");
    scanf("%d",&number);
    ptr=(int *) malloc(number*sizeof(int));
    for(iterator=0;iterator<number;iterator++)
    {
        printf("\nPlease enter the [%d]:",iterator);
        scanf("%d",&ptr[iterator]);
        if(ptr[iterator]>Max)
            Max=ptr[iterator];
    }

    printf("\nThe max of these numbers is %d",Max);
    return 0;
}
