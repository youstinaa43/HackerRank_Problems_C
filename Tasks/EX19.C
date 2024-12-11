
/*write a program to get an several integer number and print the average number   */

#include<stdio.h>
#include<conio.h>
int main(void){
  int number,counter,iterator,sum=0;
  float average;
  printf("Please enter the number of numbers to get their Average: ");
  scanf("%d",&counter);
  for(iterator=1;iterator<=counter;iterator++)
  {
      printf("Please enter a number:");
      scanf("%d",&number);
      sum+=number;

  }
  average=(float)sum/counter;

  printf("\nThe average of these numbers is %.3f",average);


return 0;
}

