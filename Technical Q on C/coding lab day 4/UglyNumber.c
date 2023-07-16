#include <stdio.h>
int div(int n1, int n2) {
  while (n1 % n2 == 0)
    n1 /= n2;
  return n1;
}
int isUgly(int n) {
  n = div(n, 2);
  n = div(n, 3);
  n = div(n, 5);
  return (n == 1) ? 1 : 0; // successfully divided by 2,3,5
}
int findUgly(int n) {
  int u = 1, count = 1; // 1 already counted as ugly
  while (n > count) {
    u++;
    if (isUgly(u))
      count++;
  }
  return u;
}
void main() {
  int n = 7;
  int u = findUgly(n);
  printf("The %dth ugly number is %d", n, u);
}