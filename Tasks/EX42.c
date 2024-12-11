/*write a program in c to add two integer numbers using pointers to integers*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    int *ptr1, *ptr2;
    int number1,number2,sum;
    ptr1=&number1;
    ptr2=&number2;
    printf("Please enter the first number : ");
    scanf("%d",&number1);
    printf("\nPlease enter the second number : ");
    scanf("%d",&number2);
    sum=*ptr1+*ptr2;
    printf("\n %d + %d = %d ",number1,number2,sum);


    return 0;
}
