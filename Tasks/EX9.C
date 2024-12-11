#include <stdio.h>
#include <stdlib.h>
/*write a program determine number positive or negative or zero*/
int main(void )
{
    float Number;
    printf("Please enter a number:");
    scanf("%f",&Number);
    if (Number==0)
        printf("The Number %.2f is Zero",Number);
    else if (Number>0)
        printf("The Number %.2f is Positive",Number);
    else
        printf("The Number %.2f is Negative",Number);

    return 0;
}

