#include<stdio.h>
/*write a function to input a number from user and find power of given number using iterative and recursion  */

int FunctionPower(int base , int power);
int RecursionPower(int base, int power);

int main(void)
{
    int base, power;
    printf("Please enter the base number and power: ");
    scanf("%d %d",&base,&power);
    printf("\npower from function of base: %d, of power: %d is %d\n",base,power,FunctionPower(base,power));
    printf("\npower from Recursion of base: %d, of power: %d is %d\n",base,power,RecursionPower(base,power));


   return 0;
}
//using function
int FunctionPower(int base , int power){
  int iterator , result=1;
  for(iterator=1;iterator<=power;iterator++)
    result*=base;
  return result;
}

//using recursion

int RecursionPower(int base, int power)
{
    if (power==1)
        return base;
    else
        return base*RecursionPower(base,power-1);
}

