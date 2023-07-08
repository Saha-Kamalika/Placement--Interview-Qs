#include <stdio.h>
int main() {
  int n1, n2;
  printf("Enter the 2 numbers: ");
  scanf("%d%d", &n1, &n2);
  int i = 2, gcd = 1;
  while (i <= n1 && i <= n2) {
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i;
    i++;
  }
  int lcm = (n1 * n2) / gcd;
  printf("The GCD of %d and %d is %d", n1, n2, gcd);
  printf("\nThe LCM of %d and %d is %d", n1, n2, lcm);
  return 0;
}