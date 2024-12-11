#include<stdio.h>
/*write a program to convert decimal number to binary number using iterative and recursion*/
void BinaryRecursion(int number);
long long BinaryIterative(int number);
void main(void){
    int number;
    long long convertedNumber;
     printf("please enter a number: ");
     scanf("%d",&number);
     printf("The conversion of  %d using recursion is ",number);
     BinaryRecursion(number);
     printf("\nThe conversion of  %d using iterative is ",number);
     convertedNumber=BinaryIterative(number);
     printf("%lu",convertedNumber);
}


void BinaryRecursion(int number)
{
    if(number>0)
    {
        BinaryRecursion(number/2);
        printf("%d",number%2);
    }
}

long long BinaryIterative(int number)
{
    int tempNumber=number;
    long long convertedNumber=0;
    int reminder,placeValue = 1;

    while(tempNumber>0)
    {
        reminder=tempNumber%2;
        convertedNumber += reminder * placeValue;
        tempNumber/=2;
        placeValue *= 10;

    }
    return convertedNumber;
}
