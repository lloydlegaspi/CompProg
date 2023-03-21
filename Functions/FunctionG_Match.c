#include <stdio.h>
#include <string.h>

int main() {
  char x[] = "Slayyy, madam!";
  char y[] = "m";
  char z[] = "Slay";

  // strcspn - find the length of the initial segment of string that consists entirely of characters not from separators
  int cspn = strcspn(x, y);
  printf("strcspn: %d\n", cspn);

  // strspn - find the length of the initial segment of string that consists entirely of characters from characters
  int spn = strspn(x, z);
  printf("strspn: %d\n", spn);

  // strpbrk - find the first occurrence in string of any of the characters that are part of characters
  char *pbrk = strpbrk(x, y);
  printf("strpbrk: %s\n", pbrk);

  // strrchr - find the last occurrence of a character in a string
  char *rchr = strrchr(x, 'd');
  printf("strrchr: %s\n", rchr);

  return 0;
}