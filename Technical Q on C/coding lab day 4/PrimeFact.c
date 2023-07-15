#include <stdio.h>
void primefactors(int n) {
  while (n % 2 == 0) { // case when n is even
    printf("%d ", 2);
    n /= 2;
  }
  for (int i = 3; i <= n / 2; i += 2) { // case when n is odd
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }
  if (n > 2)
    printf("%d ", n); // when n itself is prime
}
void main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  primefactors(n);
}