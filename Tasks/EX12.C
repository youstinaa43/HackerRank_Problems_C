#include <stdio.h>
#include <stdlib.h>
/*write a program to get an integer number and convert to amount text between 0....999 */
int main(void )
{
    int Number;
    printf("Please enter an integer number: ");
    scanf("%d",&Number);
    int hundreds=Number/100;
    int remainder = Number % 100;
    int tens=remainder/10;
    int ones=remainder%10;
    if (Number<0|| Number>999)
    {
        printf("Please enter a number in range 0 to 99");
        exit(1);
    }
    if (Number==0)
    {
        printf("The text conversion of number %d is Zero ",Number);
        exit(1);
    }
    printf("The text conversion of number %d is ",Number);
    if (hundreds > 0) {
        switch (hundreds) {
            case 1: printf("One Hundred"); break;
            case 2: printf("Two Hundred"); break;
            case 3: printf("Three Hundred"); break;
            case 4: printf("Four Hundred"); break;
            case 5: printf("Five Hundred"); break;
            case 6: printf("Six Hundred"); break;
            case 7: printf("Seven Hundred"); break;
            case 8: printf("Eight Hundred"); break;
            case 9: printf("Nine Hundred"); break;
        }

        if (remainder > 0) printf(" and ");

    }

    switch(tens)
    {
    case 1:
        {
            switch(ones)
                            {
                            case 0: printf("Ten "); break;
                            case 1: printf("Eleven "); break;
                            case 2: printf("Twelve "); break;
                            case 3: printf("Thirteen"); break;
                            case 4: printf("Fourteen"); break;
                            case 5: printf("Fifteen"); break;
                            case 6: printf("Sixteen "); break;
                            case 7: printf("Seventeen"); break;
                            case 8: printf("Eighteen"); break;
                            case 9: printf("Nineteen"); break;
                            }
        }
        exit(1);
    case 2: printf(" Twenty "); break;
    case 3: printf("Thirty  "); break;
    case 4: printf("Forty "); break;
    case 5: printf("Fifty "); break;
    case 6: printf("Sixty "); break;
    case 7: printf("Seventy "); break;
    case 8: printf("Eighty "); break;
    case 9: printf("Ninety "); break;
    }
    switch(ones)
    {
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
    case 3: printf("Three"); break;
    case 4: printf("Four"); break;
    case 5: printf("Five"); break;
    case 6: printf("Six"); break;
    case 7: printf("Seven"); break;
    case 8: printf("Eight"); break;
    case 9:printf("Nine"); break;
    }
    printf("\n");
    return 0;
}


