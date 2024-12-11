
#include<stdio.h>
/*write a function to sum of natural numbers using iterative and recursion  */
void IterativeSumNaturalNumbers(int Naturalnumber);
int RecursionSumNaturalNumbers(int Naturalnumber);
int SumOfNaturalNumbersUsingFormual(int NaturalNumber);
void main(void){
    int Naturalnumber;
    do
    {
     printf("please enter a natural number: ");
     scanf("%d",&Naturalnumber);
    }
    while(Naturalnumber<=0);
     IterativeSumNaturalNumbers(Naturalnumber);
     printf("\nThe sum of natural numbers from 1 to %d using recursion is %d\n",Naturalnumber,RecursionSumNaturalNumbers(Naturalnumber));
     printf("\nThe sum of natural numbers from 1 to %d using Formula is %d",Naturalnumber,SumOfNaturalNumbersUsingFormual(Naturalnumber));
}


void IterativeSumNaturalNumbers(int Naturalnumber)
{
    int iterator,sum=0;
    for(iterator=1;iterator<=Naturalnumber;iterator++)
        sum+=iterator;
    printf("The sum of natural numbers from 1 to %d using iterative is %d\n",Naturalnumber,sum);

}

int RecursionSumNaturalNumbers(int Naturalnumber)
{
    if (Naturalnumber == 1)
        return 1;
    return Naturalnumber+RecursionSumNaturalNumbers(Naturalnumber-1);

}

int SumOfNaturalNumbersUsingFormual(int NaturalNumber)
{
    return (NaturalNumber*(NaturalNumber+1))/2;
}

