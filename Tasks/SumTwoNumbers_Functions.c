#include<stdio.h>
int AddationOfTwoNumbers(int number1,int number2);
int MinOfTwoNumbers(int number1, int number2);
int main(void)
{
    int number1,number2;
    printf("Please enter the first number:");
    scanf("%d",&number1);
    printf("\nPlease enter the second number:");
    scanf("%d",&number2);
    printf("\nThe sum of %d and %d is %d",number1,number2,AddationOfTwoNumbers(number1,number2));
    printf("\nThe Min of %d and %d is %d\n",number1,number2,MinOfTwoNumbers(number1,number2));


    return 0;
}

int AddationOfTwoNumbers(int number1,int number2)
{
    return number1+number2;
}

int MinOfTwoNumbers(int number1, int number2)
{
    if (number1<number2)
        return number1;
    else
        return number2;
}
