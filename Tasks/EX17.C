

/*write a program to get an several integer number and print the minimum number within it  */

#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(void){
  int number,counter,iterator;
  int min=INT_MAX;
  printf("Please enter the number of numbers to get their Min: ");
  scanf("%d",&counter);
  for(iterator=1;iterator<=counter;iterator++)
  {
      printf("Please enter a number:");
      scanf("%d",&number);
      if(number<min)
          min=number;
  }

  printf("\nThe minimum number of these numbers is %d",min);


return 0;
}
