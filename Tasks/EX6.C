#include <stdio.h>
#include <stdlib.h>
/*write a program DETERMINE NUMBER POSITIVE OR NEGATIVE OR ZERO*/
int main(void )
{
    int IntNumber;
    printf("Please enter integer number: ");
    scanf("%d",&IntNumber);

    printf("The number %d  is %s",IntNumber,(IntNumber==0)?"Zero":((IntNumber>0)?"Positive":"Negative"));


    return 0;
}
