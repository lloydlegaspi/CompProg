#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char *dup = strdup(str);

    printf("Duplicated string: %s\n", dup);
    return 0;
}
