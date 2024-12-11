#include <stdio.h>
#include <stdlib.h>
/*write a program that compute the area of a square*/
int main(void )
{
    float LengthofSquare,  AreaOfSquare;
    printf("Please enter the length of square: ");
    scanf("%f",&LengthofSquare);

    AreaOfSquare=LengthofSquare*LengthofSquare;
    printf("The Area of square is = %.2f \n",AreaOfSquare);

    return 0;
}
