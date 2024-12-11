

/*write a program to get an several integer number and print the range without the two extremes values of this numbers  */


#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(void){
  int number,counter,iterator,sum=0;
  int max=INT_MIN;
  int min=INT_MAX;
  int secondMax = INT_MIN, secondMin = INT_MAX;
  int foundMax = 0, foundMin = 0;

  printf("Please enter the number of numbers to get their Range: ");
  scanf("%d",&counter);
  for (iterator = 0; iterator < counter; iterator++) {
        printf("Please enter a number: ");
        scanf("%d", &number);
        if (number == max && !foundMax) {
            foundMax = 1;
            continue;
        }
        if (number == min && !foundMin) {
            foundMin = 1;
            continue;
        }

        if (number > max) {
            secondMax = max;
            max = number;
        } else if (number > secondMax) {
            secondMax = number;
        }

        if (number < min) {
            secondMin = min;
            min = number;
        } else if (number < secondMin) {
            secondMin = number;
        }
    }
  printf("\nThe range without the two extremes values of these numbers between %d and %d",secondMin,secondMax);


return 0;
}
