#include <stdio.h>
#include <string.h>

int main() {
  char string1[] = "Hello";
  char string2[] = "hello";
  char string3[] = "Hello World";

  /*Compares string1 and string2 and returns an 
  integer based on the following:
Value Meaning
< 0 string1 has lower ASCII value than string2
0 string1 is equal to string2
> 0 string1 is greater than string2*/

  int result1 = strcmp(string1, string2);
  printf("result: %d\n", result1);

  int result2 = strcmp(string2, string3);
  printf("result: %d\n", result2);

  /*Compares two strings while ignoring cases; */

  int result3 = strcmpi(string1,string2);
  printf("result: %d\n", result3);

  int result4 = strcmpi(string2,string3);
  printf("result: %d\n", result4);

  /*Compares no more than count characters for the two strings*/

  int result5 = strncmp(string1,string2, 5);
  printf("result: %d\n", result5);

  int result6 = strncmp(string2,string3, 5);
  printf("result: %d\n", result6);

  return 0;
}
