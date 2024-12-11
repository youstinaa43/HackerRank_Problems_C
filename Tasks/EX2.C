
#include <stdio.h>
#include <stdlib.h>
/*write a program that compute the area of a rectangle*/
int main(void )
{
    float LengthofRectangle,WidthofRectangle,  AreaOfRectangle;
    printf("Please enter the length of Rectangle: ");
    scanf("%f",&LengthofRectangle);
    printf("Please enter the width of Rectangle: ");
    scanf("%f",&WidthofRectangle);

    AreaOfRectangle=LengthofRectangle*WidthofRectangle;
    printf("The Area of rectangle is = %.2f \n",AreaOfRectangle);

    return 0;
}
