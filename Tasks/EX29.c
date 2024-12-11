#include<stdio.h>
/*write function to input a number and find the factorial of a given integer using iterative and recursion */
long int Functionfactorial(int n);
int RecursionFact(int number);
void main(void){
     int number;
     printf("please enter a number to calculate its factorial: ");
     scanf("%d",&number);
     printf("the factorial of %d using function is %d\n",number,Functionfactorial(number));
     printf("the factorial of %d using recursion is %d\n",number,RecursionFact(number));
}

//using function
long int Functionfactorial(int number){
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

