
#include <stdio.h>
#include <stdlib.h>
/*write a program calculate the income tax based on the income tax depend on the table
<=7000===>exempted
>7000  <=20000===>10%
>20000  <=45000===>15%
>45000  <=200000===>20%
>200000  ===>40%

*/
int firstSection=7000;
int secondSection=13000;
int thirdSection=25000;
int forthSection=155000;
int main(void )
{
    float Income,YearlyIncome,AnnualTax=0,MonthlyTax;
    printf("Please enter your monthly income:");
    scanf("%f",&Income);
    YearlyIncome=Income*12;

    if (YearlyIncome<=7000) AnnualTax=0;
    else if (YearlyIncome>7000&&YearlyIncome<=20000)  AnnualTax=(YearlyIncome-7000)*.1;
    else if (YearlyIncome>20000&&YearlyIncome<=45000) AnnualTax=0.1* secondSection + 0.15*(YearlyIncome-20000);
    else if (YearlyIncome>45000&&YearlyIncome<=200000) AnnualTax=0.1* secondSection + 0.15*thirdSection + 0.20* (YearlyIncome-45000);
    else  AnnualTax=0.1* secondSection + 0.15*thirdSection + 0.20* forthSection+.40* (YearlyIncome-200000);

    MonthlyTax=AnnualTax/12;

    printf("Your monthly tax is %0.2f",MonthlyTax);



    return 0;
}

