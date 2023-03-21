#include <stdio.h>
#include <string.h>

int main() {
  char str1[20];
  char str2[] = "Polytechnic University";
  
  /*strncpy function is used to copy the first count characters from source into target. */

  strncpy(str1, str2, 7);
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);

  return 0;
}
