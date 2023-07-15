#include <stdio.h>
int maxfreq(int a[], int n) {
  int maxc = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j])
        c++;
    }
    if (c > maxc) {
      maxc = c;
      max = a[i];
    }
  }
  return max;
}
void main() {
  int a[] = {10, 10, 20, 10, 20, 30, 20};
  int n = sizeof(a) / sizeof(a[0]);
  printf("%d", maxfreq(a, n));
}