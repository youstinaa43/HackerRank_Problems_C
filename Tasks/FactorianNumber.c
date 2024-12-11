#include<stdio.h>

long int factorial(int n);

void main(void){
     int number,result,iterator;
     printf("please enter a number to calculate its factorial: ");
     scanf("%d",&number);
     for(iterator=1;iterator<=number;iterator++)
     {
         result=factorial(iterator);
         printf("the factorial of %d is %d\n",iterator,result);
     }

     printf("the factorial of %d using recursion %d\n",number,RecursionFact(number));
}

//using function
long int factorial(int number){
    int iterator;
    long result=1;
    for(iterator=1;iterator<=number;iterator++)
        result*=iterator;

    return result;


}

//using recursion
int RecursionFact(int number)
{
    if (number==1)
        return 1;
    else
        return number*RecursionFact(number-1);
}
