#include <stdio.h>
#include <string.h>

int main() {
  char string1[20];
  char string2[] = "Polytechnic University";

/*Copies up to count characters from the string source into the string target. It returns the 
length of the string source. This function is the same with the strncpy.*/

  strxfrm(string1, string2, 7);

  printf("string1: %s\n", string1);
  printf("string2: %s\n", string2);

  return 0;
}