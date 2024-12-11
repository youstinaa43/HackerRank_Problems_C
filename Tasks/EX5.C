#include <stdio.h>
#include <stdlib.h>
/*write a program that compute the sum of two int numbers*/
int main(void )
{
    int Number1,Number2, SumOftwoNumbers;
    printf("Please enter the Number one: ");
    scanf("%d",&Number1);
    printf("Please enter the Number two: ");
    scanf("%d",&Number2);


    SumOftwoNumbers=Number1+Number2;
    printf("The Sum of two numbers is = %d \n",SumOftwoNumbers);

    return 0;
}
