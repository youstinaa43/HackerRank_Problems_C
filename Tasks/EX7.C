#include <stdio.h>
#include <stdlib.h>
/*write a program DETERMINE NUMBER even OR odd */
int main(void )
{
    int IntNumber;
    printf("Please enter integer number: ");
    scanf("%d",&IntNumber);

    printf("The number %d  is %s",IntNumber,(IntNumber%2==0)?"Even":"Odd");


    return 0;
}
