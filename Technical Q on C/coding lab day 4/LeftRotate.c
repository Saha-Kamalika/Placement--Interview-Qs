#include <stdio.h>
void rotate(int a[], int n, int d) {
  int k = 1, i;
  while (k <= d) {
    int l = a[0];
    for (i = 0; i < n - 1; i++)
      a[i] = a[i + 1];
    a[i] = l;
    k++;
  }
}
void main() {
  int a[] = {3, 1, 34, 7, 4};
  int n = sizeof(a) / sizeof(a[0]);
  int d = 2;
  rotate(a, n, d);
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}
