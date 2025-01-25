#include <stdio.h>
#include <limits.h>

int main() {
  int x = INT_MAX;
  int y = 10;

  // Check for potential overflow before addition
  if (x > INT_MAX - y) {
    fprintf(stderr, "Integer overflow detected!\n");
    return 1;
  }

  x += y; 
  printf("%d", x);
  return 0; 
} 