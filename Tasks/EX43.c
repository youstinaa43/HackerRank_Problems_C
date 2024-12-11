/*write a program in c to store n elements in an array and print the elements using pointer*/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
int main(void)
{
    int Numbers[MAX_SIZE],iterator,size=0;
    int *ptr=Numbers;
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }while(Numbers[size++]!= -1&&size<=20);
    size--;
    printf("===========================================\n");
    for(iterator=0;iterator<size;iterator++)
        printf("%d\n",*ptr++);
    printf("==================another way =========================\n");
    ptr=Numbers;
    for(iterator=0;iterator<size;iterator++)
        printf("%d\n",*(ptr+iterator));

    return 0;
}
