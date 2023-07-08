#include <stdio.h>
int isPrime(int n) {
  int flag = 0;
  for (int i = 2; i < n / 2; i++) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    return 1;
  else
    return 0;
}
int isSum(int n, int k) {
  if (n < 2 * k)
    return 0;
  if (k == 1)
    return isPrime(n);
  if (k == 2) {
    if (n % 2 == 0)
      return 1;
    return isPrime(n - 2);
  }
  return 1;
}
int main() {
  int n, k;
  printf("Enter n and k: ");
  scanf("%d%d", &n, &k);
  if (isSum(n, k))
    printf("Yes");
  else
    printf("No");
  return 0;
}