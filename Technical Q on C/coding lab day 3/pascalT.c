#include <stdio.h>
void main() {
  int n, num = 1;
  printf("Enter the line no: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n - i; j++)
      printf("  ");

    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == 0)
        num = 1;
      else
        num = num * (i - j + 1) / j;
      printf("%4d ", num);
    }
    printf("\n");
  }
}