#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
  char *file_path = "path/to/Users/ACER/OneDrive/Desktop/Programming Beginner/C Introduction/FunctionsLesson7/Function6_7_8_Compare.c";
  FILE *fp = fopen(file_path, "r");

  if (fp == NULL) {
    int error_number = errno;
    char *error_message = strerror(error_number);
    printf("Failed to open file '%s': %s\n", file_path, error_message);
  } else {
    printf("File '%s' successfully opened\n", file_path);
    fclose(fp);
  }

  return 0;
}

