#include <stdio.h>
#include <math.h>

int main() {
    double num = 3.14159;

    double result = floor(num);

    printf("The largest integer less than or equal to %lf is: %lf\n", num, result);

    return 0;
}
