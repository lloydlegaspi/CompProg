#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "Hello, World!";
  printf("Original string: %s\n", string);

  // Convert string to lowercase
  char *lowercase = strlwr(string);
  printf("Lowercase string: %s\n", lowercase);

  // Convert string to uppercase
  char *uppercase = strupr(string);
  printf("Uppercase string: %s\n", uppercase);

  return 0;
}