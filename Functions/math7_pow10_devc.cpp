#include <stdio.h>
#include <math.h>

int main() {
    int exponent;
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    double result = pow(10, exponent);
    printf("10^%d = %f\n", exponent, result);
    return 0;
}

