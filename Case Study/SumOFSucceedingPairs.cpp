#include <stdio.h>

int main() {
  // Declaration of variables
  int numbers[11];
  int sums[10];

  // Prompt the user to input 11 numbers
  printf("Enter eleven numbers: ");

  // Read the numbers from the user
  for (int i = 0; i < 11; i++) {
    scanf("%d", &numbers[i]);
  }

  // Calculate the sum of each pair of succeeding numbers
  for (int i = 0; i < 10; i++) {
    sums[i] = numbers[i] + numbers[i+1];
  }

  // Print the sums of the pairs of numbers
  printf("SUM of TWO succeeding pairs: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", sums[i]);
  }

  return 0;
}

