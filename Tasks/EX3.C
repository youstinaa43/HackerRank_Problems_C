#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
/*write a program that compute the area of a Circle*/
int main(void )
{
    float RadiusOfCircle, AreaOfcircle;
    printf("Please enter the radius of Circle: ");
    scanf("%f",&RadiusOfCircle);


    AreaOfcircle=RadiusOfCircle*RadiusOfCircle*pi;
    printf("The Area of circle is = %.2f \n",AreaOfcircle);

    return 0;
}

