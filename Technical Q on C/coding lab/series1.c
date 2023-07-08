#include <stdio.h>
int main() {
  int n;
  float i = 1, res = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  while (i <= n) {
    res = res + (1 / i);
    i++;
  }
  printf("The sum of the series is %.2f", res);
  return 0;
}