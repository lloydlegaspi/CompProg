#include <stdio.h>
#include <math.h> // for sqrt() function

int main()
{
    // get input from user
    int n;
    printf("Enter non-negative number: ");
    scanf("%d", &n);

    // initialize prime factor array
    int prime_factors[100];
    int num_factors = 0;

    // check for prime factors
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            // add prime factor to array
            prime_factors[num_factors++] = i;
            // divide n by the prime factor
            n /= i;
        }
    }

    // if n is still greater than 1, it's a prime number itself
    if (n > 1) {
        prime_factors[num_factors++] = n;
    }

    // print prime factors
    printf("Prime factors are: ");
    for (int i = 0; i < num_factors; i++) {
        printf("%d ", prime_factors[i]);
    }
    printf("\n");

    return 0;
}

