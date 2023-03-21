#include <stdio.h>

int main()
{
    // get input from user
    int a, b, c;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Enter third integer: ");
    scanf("%d", &c);

    // create an array of the integers
    int numbers[] = {a, b, c};

    // sort the array in descending order
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (numbers[i] < numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // print the sorted array
    for (int i = 0; i < 3; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

