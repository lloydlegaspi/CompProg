#include <stdio.h>
#include <string.h>

int main() {
  char string1[20] = "John";
  char string2[] = " Lloyd";

  /*Concatenates no more than count characters of string2 to string1 
  and assigns this to string1; string2 is untouched by the operation*/

  strncat(string1, string2, 5);
  printf("string1: %s\n", string1);

  return 0;
}
