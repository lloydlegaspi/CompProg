#include <stdio.h>
#include <math.h>

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double result = sqrt(number);
    printf("The square root of %lf is %lf\n", number, result);
    return 0;
}
