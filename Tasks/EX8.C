
#include <stdio.h>
#include <stdlib.h>
/*write a program to pay amount to customer using fewest number of coins . given currency denominations: 1,5,10,25,50*/
int main(void )
{
    float amount;
    int num50,num25, num10, num5, num1, totalcents;
    printf("Please enter the Amount: ");
    scanf("%f",&amount);
    totalcents=(int)(amount*100);

    num50 = totalcents / 50;
    totalcents %= 50;

    num25 = totalcents / 25;
    totalcents %= 25;

    num10 = totalcents / 10;
    totalcents %= 10;

    num5 = totalcents / 5;
    totalcents %= 5;

    num1 = totalcents;

    printf((num50)?"%d coin(s) of 50\n":"", num50);
    (num50)?printf("%d",num50):"";
    printf((num25)?"%d coin(s) of 25\n":"", num25);
    printf((num10)?"%d coin(s) of 10\n":"", num10);
    printf((num5)?"%d coin(s) of 5\n":"", num5);
    printf((num1)?"%d coin(s) of 1\n":"", num1);
    printf("Min number of coins are:%d",num50+num25+num10+num5+num1);

    return 0;
}
