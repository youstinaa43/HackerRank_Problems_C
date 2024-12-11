/*write a program to get a decimal integer number and convert it to any base depend on the base that get it from the user */

#include<stdio.h>
#include<conio.h>

int main(void) {
    int number, base, reminder, tempNumber;
    long long convertedNumber = 0;
    int placeValue = 1;

    do {
        printf("Please enter a decimal integer number: ");
        scanf("%d", &number);
        printf("\nPlease enter the base (2, 8, or 16): ");
        scanf("%d", &base);
    } while (base != 2 && base != 8 && base != 16);

    tempNumber = number;

    while (tempNumber > 0 && base != 16) {
        reminder = tempNumber % base;
        convertedNumber += reminder * placeValue;
        tempNumber /= base;
        placeValue *= 10;
    }

    if (base == 16) {
            int iterator1,iterator2;
        tempNumber = number;

        printf("The number %d in base 16 is: ", number);

        int digitCount = 0;
        int temp = tempNumber;
        while (temp > 0) {
            temp /= base;
            digitCount++;
        }

        for ( iterator1 = digitCount - 1; iterator1 >= 0; iterator1--) {
            int divisor = 1;
            for ( iterator2 = 0; iterator2 < iterator1; iterator2++) {
                divisor *= base;
            }
            reminder = (tempNumber / divisor) % base;
            if (reminder < 10) {
                printf("%d", reminder);
            } else {
                printf("%c", 'A' + (reminder - 10));
            }
        }
        printf("\n");
        return 0;
    }

    printf("The number %d in base %d converted to %lld\n", number, base, convertedNumber);

    return 0;
}

