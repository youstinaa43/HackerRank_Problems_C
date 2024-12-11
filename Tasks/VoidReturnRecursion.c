#include<stdio.h>
/*program to convert any number into binary */
void Binary(int number);
void main(void){
    int number;
     printf("please enter a number: ");
     scanf("%d",&number);
     Binary(number);
}


void Binary(int number)
{
    if(number>0)
    {
        Binary(number/2);
        printf("%d",number%2);
    }
}
