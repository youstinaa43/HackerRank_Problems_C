#include <stdio.h>
#include <stdlib.h>
/*write a program that compute the area of a TRIANGLE*/
int main(void )
{
    float BaseofTriangle,HightOftriangle, AreaOftriangle;
    printf("Please enter the Base of Triangle: ");
    scanf("%f",&BaseofTriangle);
    printf("Please enter the Hight of Triangle: ");
    scanf("%f",&HightOftriangle);


    AreaOftriangle=BaseofTriangle*HightOftriangle*0.5;
    printf("The Area of triangle is = %.2f \n",AreaOftriangle);

    return 0;
}

