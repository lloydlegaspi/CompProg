#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char ch = 'o';

    char *result = strchr(str, ch);
    printf("The first occurrence of %c in %s is: %s\n", ch, str, result);
    
    return 0;
}
