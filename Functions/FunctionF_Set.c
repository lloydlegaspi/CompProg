#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "Hello, World!";
  printf("Original string: %s\n", string);

  // Set the first 5 characters of the string to 'X'
  strnset(string, 'X', 5);
  printf("Modified string (strnset): %s\n", string);

  // Reset the string back to its original value
  strcpy(string, "Hello, World!");

  // Set all characters in the string to 'X'
  strset(string, 'X');
  printf("Modified string (strset): %s\n", string);

  return 0;
}