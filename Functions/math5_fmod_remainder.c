#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 8;
    double num2 = 3;

    double result = fmod(num1, num2);

    printf("The remainder of %lf divided by %lf is: %lf\n", num1, num2, result);

    return 0;
}
