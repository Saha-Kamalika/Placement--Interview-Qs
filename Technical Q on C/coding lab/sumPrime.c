#include <stdio.h>
void main() {
  int n, low = 2, n1 = 1, sum = 0, flag = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  while (n1 <= n) {
    flag = 0;
    for (int i = 2; i <= low / 2; i++) {
      if (low % i == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      n1++;
      printf("%d ", low);
      sum += low;
    }
    ++low;
  }
  printf("\nSum of first %d prime numbers: %d", n, sum);
}