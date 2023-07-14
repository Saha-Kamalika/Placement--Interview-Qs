#include <stdio.h>
void main() {
  int a[] = {1, 4, 45, 6, 10, -8};
  int target = 16;
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (a[i] + a[j] == target) {
        printf("("
               "%d"
               ","
               "%d"
               ")",
               a[i], a[j]);
      }
    }
  }
}