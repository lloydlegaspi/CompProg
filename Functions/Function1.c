#include <stdio.h>
#include <string.h>

int main() {
  char string1[60];
  char string2[] = "John Lloyd";

//    strcpy function is used to copy the contents of string2 into string1. 

  strcpy(string1, string2);   

  printf("string1: %s\n", string1);
  printf("string2: %s\n", string2);

  return 0;
}
