#include<stdio.h>
/*write a function to check whether a number is a prime number*/
void CheckNumberPrime(int number);
void main(void){
    int number;
     printf("please enter a number to check if it prime or not: ");
     scanf("%d",&number);
     CheckNumberPrime(number);
}


void CheckNumberPrime(int number)
{   int prime1, prime2,iterator;
    if(number<=0)
        printf("Please enter a natural number more than zero");
    else
    {
        if(number%1==0)
            prime1=1;
        for(iterator=2;iterator<=number;iterator++)
        {
            if(iterator%number==0)
                prime2=1;
            else
                prime2=0;


        }
        if(prime1&prime2==0)
                printf("\nThe number %d is not prime number",number);
            else
                printf("\nThe number %d is prime number",number);

    }
}

