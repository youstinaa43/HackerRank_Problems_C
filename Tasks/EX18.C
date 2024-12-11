

/*write a program to get an several float number and print the range of this numbers(max-min)  */

#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(void){
  int number,counter,iterator;
  int max=INT_MIN;
  int min=INT_MAX;
  printf("Please enter the number of numbers to get their Range: ");
  scanf("%d",&counter);
  for(iterator=1;iterator<=counter;iterator++)
  {
      printf("Please enter a number:");
      scanf("%d",&number);
      if(number>max)
          max=number;
      if(number<min)
          min=number;
  }

  printf("\nThe range of these numbers between %d and %d",min,max);


return 0;
}
