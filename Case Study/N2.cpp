#include <stdio.h>

int main()
{
    // get input from user
    int n1, n2, m;
    printf("Enter starting number (N1): ");
    scanf("%d", &n1);
    printf("Enter ending number (N2): ");
    scanf("%d", &n2);
    printf("Enter divisor (M): ");
    scanf("%d", &m);

    // initialize counter
    int count = 0;

    // iterate over numbers from N1 to N2
    for (int i = n1; i <= n2; i++) {
        // check if number is divisible by M
        if (i % m == 0) {
            // print number
            printf("%d ", i);
            // increment counter
            count++;
        }
    }

    // print count
    printf("\nNumber of numbers divisible by %d: %d\n", m, count);

    return 0;
}

