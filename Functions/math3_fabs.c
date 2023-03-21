#include <stdio.h>
#include <math.h>

int main() {
    double num = -3.14159;

    double result = fabs(num);

    printf("The absolute value of %lf is: %lf\n", num, result);

    return 0;
}
