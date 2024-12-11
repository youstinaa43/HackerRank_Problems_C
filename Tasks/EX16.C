
/*write a program to get an several integer number and print the maximum number within it  */

#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main(void){
  int number,counter,iterator;
  int max=INT_MIN;
  printf("Please enter the number of numbers to get their Max: ");
  scanf("%d",&counter);
  for(iterator=1;iterator<=counter;iterator++)
  {
      printf("Please enter a number:");
      scanf("%d",&number);
      if(number>max)
          max=number;
  }

  printf("\nThe maximum number of these numbers is %d",max);

return 0;
}
