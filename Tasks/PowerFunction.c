#include<stdio.h>
int power(int base , int number);
int RecursionPower(int base, int number);

int main(void)
{
    int base, number;
    printf("Please enter the base number and power: ");
    scanf("%d %d",&base,&number);
    printf("\npower from function of base: %d, of power: %d is %d\n",base,number,power(base,number));
    printf("\npower from Recursion of base: %d, of power: %d is %d",base,number,RecursionPower(base,number));


   return 0;
}
//using function
int power(int base , int number){
  int iterator , result=1;
  for(iterator=1;iterator<=number;iterator++)
    result*=base;
  return result;
}

//using recursion

int RecursionPower(int base, int number)
{
    if (number==1)
        return base;
    else
        return base*RecursionPower(base,number-1);
}
