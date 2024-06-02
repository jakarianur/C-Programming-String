#include <stdio.h>
#include <string.h>
int main() {
  char str1[30] = "Jakaria", str2[30] = "Nur";
  int result;
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
  return 0;
}
