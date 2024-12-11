#include<stdio.h>
/*write a function to swap two numbers using function */
void swapNumbers(int number1,int number2);
void main(void){
    int number1, number2;
     printf("please enter two numbers: ");
     scanf("%d",&number1);
     scanf("%d",&number2);
     printf("\nThe two numbers before swapping are %d , %d\n",number1,number2);
     swapNumbers(number1,number2);
}


void swapNumbers(int number1,int number2)
{
    int tempNumber;
    tempNumber=number1;
    number1=number2;
    number2=tempNumber;
    printf("\nThe two numbers after swapping are %d , %d",number1,number2);

}
