#include <stdio.h>

int main() {
  FILE *fp;
  char filename[] = "Hol\4";

  // Open the file for writing
  fp = fopen("101-password", "w");

  // Check if the file was successfully opened
  if (fp == NULL) {
    printf("Failed to open file: %s\n", filename);
    return 1;
  }

  // Write some data to the file
  fputs(filename, fp);

  // Close the file
  fclose(fp);

  return 0;
}
