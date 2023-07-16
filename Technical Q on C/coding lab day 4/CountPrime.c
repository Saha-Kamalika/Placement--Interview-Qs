#include <stdio.h>
int isPrime(int n) {
  int flag = 0;
  if (n == 1 || n == 0)
    return 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}
int countPrime(int n) {
  int count = 0;
  if (isPrime(n) == 0)
    count++;
  while (n > 0) {
    n /= 10;
    if (isPrime(n) == 0)
      count++;
  }
  return count;
}
void main() {
  int n = 233;
  printf("%d", countPrime(n));
}