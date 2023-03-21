#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "etneb";
    printf("Original string: %s\n", str);

    strrev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
