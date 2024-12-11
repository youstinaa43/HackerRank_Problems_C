#include<stdio.h>
int MinOfThreeNumbers(int number1, int number2,int number3);
int main(void)
{
    int number1,number2,number3;
    printf("Please enter the first number:");
    scanf("%d",&number1);
    printf("\nPlease enter the second number:");
    scanf("%d",&number2);
    printf("\nPlease enter the third number:");
    scanf("%d",&number3);
    printf("\nThe Min of %d , %d and %d is %d\n",number1,number2,number3,MinOfThreeNumbers(number1,number2,number3));


    return 0;
}


int MinOfThreeNumbers(int number1, int number2, int number3)
{
    if (number1<number2)
        {
            if(number1<number3)
                return number1;
            else
                return number3;
        }
    else
        {
            if(number2<number3)
                return number2;
            else
                return number3;
        }
}

void OrderThreeNumberASC(int number1, int number2, int number3)
{
    if (number1<number2)
        {
            if(number1<number3)
                if (number2<number3)
                    printf("The order of three numbers is %d %d %d\n",number1,number2,number3);
            else

        }
    else
        {
            if(number2<number3)
                return number2;
            else
                return number3;
        }
}
