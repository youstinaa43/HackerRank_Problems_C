#include<stdio.h>
/*write function to input a value and find the sin of a given number */

double calculateSine(double x);
int main() {
    double number;
    printf("Enter the value of x (in degrees) to calculate sin(x): ");
    scanf("%lf", &number);

    double radians = number * 3.141592653589793 / 180.0;

    printf("The sine of %.3f degrees is approximately %.3f\n", number, calculateSine(radians));

    return 0;
}

double calculateSine(double x) {
    double term = x;
    double sum = term;
    int counter = 1;
    int iterator;
    for ( iterator = 1; iterator <= 10; iterator++) {
        counter += 2;
        term = -term * (x * x) / (counter * (counter - 1));
        sum += term;
    }

    return sum;
}


