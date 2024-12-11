/*write a program in c to swap elements using function by call by reference*/
#include<stdio.h>
#include<string.h>
void swap(int *ptr1,int *ptr2);
int main(void)
{
    int number1,number2;

    printf("Please enter the first number: ");
    scanf("%d",&number1);
    printf("\nPlease enter the second number: ");
    scanf("%d",&number2);

    printf("\n==================the numbers before swaping   =========================\n");
        printf("the first number = %d \t the second number= %d",number1,number2);
         swap(&number1,&number2);

    printf("\n\n==================the numbers after swaping   =========================\n");
        printf("the first number = %d \t the second number= %d",number1,number2);


    return 0;
}


void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
