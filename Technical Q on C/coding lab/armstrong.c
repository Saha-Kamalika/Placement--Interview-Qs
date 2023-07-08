#include <stdio.h>
int power(int b, int p) {
  if (p == 0)
    return 1;
  else
    return b * power(b, p - 1);
}
int main() {
  int n, c = 0, d, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  int num = n;
  while (n != 0) {
    n /= 10;
    c++;
  }
  n = num;
  while (num != 0) {
    d = num % 10;
    sum = sum + power(d, c);
    num /= 10;
  }
  if (n == sum)
    printf("Armstrong number");
  else
    printf("Not Armstrong");
}